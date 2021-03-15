var board = document.getElementById("board"),
    score = document.getElementById("scoreCounter");
board.style.slang = "repeat(30, 1fr)";
var slang = [{
        xAxis: 15,
        yAxis: 15
    }],
    h = 0,
    k;
l();
for (var m = 3, n = 1E3 / m, p = .5, q = 0, r = !1, t = 0; 30 > t; t++)
    for (var u = 0; 30 > u; u++) {
        var grid = document.createElement("div");
        grid.setAttribute("id", u + "-" + t);
        grid.setAttribute("class", "cell");
        grid.style.width = "2.5vmin";
        grid.style.height = "2.5vmin";
        board.appendChild(grid)
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
                document.getElementById(slang[a].xAxis + "-" + slang[a].yAxis);
            e.classList.add("snake");
            d = void 0;
            var b = slang;
            1 == b.length ? d = "single" : 0 == a ? d = b[0].xAxis == b[a + 1].xAxis ? b[0].yAxis < b[a + 1].yAxis ? "endTop" : "endBottom" : b[0].xAxis < b[a + 1].xAxis ? "endLeft" : "endRight" : a == b.length - 1 ? d = b[a].xAxis == b[a - 1].xAxis ? b[a].yAxis < b[a - 1].yAxis ? "endTop" : "endBottom" : b[a].xAxis < b[a - 1].xAxis ? "endLeft" : "endRight" : b[a - 1].xAxis != b[a + 1].xAxis && b[a - 1].yAxis != b[a + 1].yAxis && (b[a - 1].xAxis < b[a + 1].xAxis && b[a - 1].yAxis < b[a + 1].yAxis && (d = b[a - 1].xAxis == b[a].xAxis ? "cornerBottomLeft" : "cornerTopRight"), b[a - 1].xAxis > b[a + 1].xAxis && b[a - 1].yAxis < b[a + 1].yAxis && (d = b[a - 1].xAxis == b[a].xAxis ?
                "cornerBottomRight" : "cornerTopLeft"), b[a - 1].xAxis < b[a + 1].xAxis && b[a - 1].yAxis > b[a + 1].yAxis && (d = b[a - 1].xAxis == b[a].xAxis ? "cornerTopLeft" : "cornerBottomRight"), b[a - 1].xAxis > b[a + 1].xAxis && b[a - 1].yAxis > b[a + 1].yAxis && (d = b[a - 1].xAxis == b[a].xAxis ? "cornerTopRight" : "cornerBottomLeft"));
            e.classList.add(d)
        }
        document.getElementById(k.xAxis + "-" + k.yAxis).classList.add("food");
        xAxis = slang[slang.length - 1].xAxis;
        yAxis = slang[slang.length - 1].yAxis;
        1 == h && (yAxis = slang[slang.length - 1].yAxis - 1, 0 > yAxis && (yAxis = 29));
        2 == h && (yAxis = slang[slang.length - 1].yAxis + 1, 29 < yAxis && (yAxis = 0));
        3 == h && (xAxis = slang[slang.length - 1].xAxis - 1, 0 > xAxis && (xAxis = 29));
        4 == h && (xAxis = slang[slang.length - 1].xAxis + 1, 29 < xAxis && (xAxis = 0));
        slang.push({
            xAxis: xAxis,
            yAxis: yAxis
        });
        r ? r = !1 : slang.shift();
        slang[slang.length - 1].xAxis == k.xAxis && slang[slang.length - 1].yAxis == k.yAxis && (r = !0, l(), m += p, p -= .01, 0 > p && (p = 0), n = 1E3 / m)
    }
    window.requestAnimationFrame(z)
}
window.requestAnimationFrame(z);

function l() {
    for (var a = [], e = 0; 30 > e; e++)
        for (var d = 0; 30 > d; d++) {
            a.push({
                xAxis: e,
                yAxis: d
            });
            for (var b = 0; b < slang.length; b++)
                if (slang[b].xAxis == e && slang[b].yAxis == d) {
                    a.pop();
                    break
                }
        }
    0 == a.length ? console.log("no places left") : k = a[Math.floor(Math.random() * a.length)]
};