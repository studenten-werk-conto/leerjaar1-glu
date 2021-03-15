var board = document.getElementById("board"),
    score = document.getElementById("scoreCounter");
board.style.slang = "repeat(30, 1fr)";
var slang = [{
        x: 15,
        y: 15
    }],
    h = 0,
    k;
l();
for (var m = 3, n = 1E3 / m, p = .5, q = 0, r = !1, t = 0; 30 > t; t++)
    for (var u = 0; 30 > u; u++) {
        var v = document.createElement("div");
        v.setAttribute("id", u + "-" + t);
        v.setAttribute("class", "cell");
        v.style.width = "2.5vmin";
        v.style.height = "2.5vmin";
        board.appendChild(v)
    }
document.addEventListener("keydown", w);

function w(a) {
    "ArrowUp" == a.code && (h = 1);
    "ArrowDown" == a.code && (h = 2);
    "ArrowLeft" == a.code && (h = 3);
    "ArrowRight" == a.code && (h = 4)
}

function z(a) {
    score.innerHTML = slang.length;
    count = a;
    var e = Math.floor(count / 1E3) % 60,
        d = Math.floor(count / 6E4) % 60;
    1 == e.toString().length && (e = "0" + e);
    1 == d.toString().length && (d = "0" + d);
    timeCounter.innerHTML = d + ":" + e;
    e = a - q;
    speedCounterValue = Math.round(1E3 / n * 10) / 10;
    1 == speedCounterValue.toString().length && (speedCounterValue += ".0");
    speedCounter.innerHTML = speedCounterValue + "fps";
    if (e > n) {
        q = a;
        cells = document.getElementsByClassName("cell");
        for (a = 0; a < cells.length; a++) cells[a].setAttribute("class", "cell");
        for (a = 0; a < slang.length; a++) {
            e =
                document.getElementById(slang[a].x + "-" + slang[a].y);
            e.classList.add("snake");
            d = void 0;
            var b = slang;
            1 == b.length ? d = "single" : 0 == a ? d = b[0].x == b[a + 1].x ? b[0].y < b[a + 1].y ? "endTop" : "endBottom" : b[0].x < b[a + 1].x ? "endLeft" : "endRight" : a == b.length - 1 ? d = b[a].x == b[a - 1].x ? b[a].y < b[a - 1].y ? "endTop" : "endBottom" : b[a].x < b[a - 1].x ? "endLeft" : "endRight" : b[a - 1].x != b[a + 1].x && b[a - 1].y != b[a + 1].y && (b[a - 1].x < b[a + 1].x && b[a - 1].y < b[a + 1].y && (d = b[a - 1].x == b[a].x ? "cornerBottomLeft" : "cornerTopRight"), b[a - 1].x > b[a + 1].x && b[a - 1].y < b[a + 1].y && (d = b[a - 1].x == b[a].x ?
                "cornerBottomRight" : "cornerTopLeft"), b[a - 1].x < b[a + 1].x && b[a - 1].y > b[a + 1].y && (d = b[a - 1].x == b[a].x ? "cornerTopLeft" : "cornerBottomRight"), b[a - 1].x > b[a + 1].x && b[a - 1].y > b[a + 1].y && (d = b[a - 1].x == b[a].x ? "cornerTopRight" : "cornerBottomLeft"));
            e.classList.add(d)
        }
        document.getElementById(k.x + "-" + k.y).classList.add("food");
        x = slang[slang.length - 1].x;
        y = slang[slang.length - 1].y;
        1 == h && (y = slang[slang.length - 1].y - 1, 0 > y && (y = 29));
        2 == h && (y = slang[slang.length - 1].y + 1, 29 < y && (y = 0));
        3 == h && (x = slang[slang.length - 1].x - 1, 0 > x && (x = 29));
        4 == h && (x = slang[slang.length - 1].x + 1, 29 < x && (x = 0));
        slang.push({
            x: x,
            y: y
        });
        r ? r = !1 : slang.shift();
        slang[slang.length - 1].x == k.x && slang[slang.length - 1].y == k.y && (r = !0, l(), m += p, p -= .01, 0 > p && (p = 0), n = 1E3 / m)
    }
    window.requestAnimationFrame(z)
}
window.requestAnimationFrame(z);

function l() {
    for (var a = [], e = 0; 30 > e; e++)
        for (var d = 0; 30 > d; d++) {
            a.push({
                x: e,
                y: d
            });
            for (var b = 0; b < slang.length; b++)
                if (slang[b].x == e && slang[b].y == d) {
                    a.pop();
                    break
                }
        }
    0 == a.length ? console.log("no places left") : k = a[Math.floor(Math.random() * a.length)]
};