// const { Collisions } = require('detect-collisions');
// https://www.youtube.com/watch?v=k238XpMMn38 ^^ importeerd dat.gui
var trees; // maakt een var voor dat je hem oproept
var overlap = false; // als true wordt dan is de auto gechrashed
var debug = true; // als de debug
var snelheid = 100; // snelheid TODO FIX
var beweeg = document.getElementById("beweeg");
var left = 100;
var topp = 100;
var car = document.getElementById("car"); // roept de auto in html naar js
var crashcounter = document.getElementById("crashcounter");
var count = 0;
console.log("js is ingeladen");
for (var index = 0; index < 10; index++) {
    // spawnt bomen
    var img = document.createElement("img");
    img.src = "assets/img/tree.jpg";
    img.className = "tree";
    // op line ↓ col 32 stond eerst 80 op line ↓↓ col 31 stond 80
    img.style.left = Math.random() * 90 + "%";
    img.style.top = Math.random() * 100 + "%";
    document.getElementById("container").appendChild(img);
    // const point   = system.createPoint(10, 10);
}
beweeg.style.left = left + "px";
beweeg.style.top = topp + "px";
document.addEventListener("keydown", function logKey(e) {
    var key = e.key;
    if (debug == true) {
        console.log(key);
    }
    if (key == "ArrowUp") {
        topp--;
        beweeg.style.transform = "rotate(-90deg)";
    }
    if (key == "ArrowDown") {
        topp++;
        beweeg.style.transform = "rotate(-270deg)";
    }
    if (key == "ArrowLeft") {
        left--;
        beweeg.style.transform = "rotate(180deg)";
    }
    if (key == "ArrowRight") {
        left++;
        beweeg.style.transform = "rotate(0deg)";
    }
    //console.log(left + " : " + topp);
    beweeg.style.left = left + "px";
    beweeg.style.top = topp + "px";
});
// if (beweeg.location <= trees.location) {
//   chrash();
//   if (debug == true) {
//     console.log("je bent gecrashed dit is door de .location");
//   }
// }
// function chrash() {
//   /// maakt de chrash
//   let trees = document.getElementsByClassName("tree");
//   let overlap = false;
//   for (let index = 0; index < trees.length; index++) {
//     overlap = !(
//       car.getBoundingClientRect().right <
//         trees[index].getBoundingClientRect().left ||
//       car.getBoundingClientRect().left <
//         trees[index].getBoundingClientRect().right ||
//       car.getBoundingClientRect().bottom <
//         trees[index].getBoundingClientRect().top ||
//       car.getBoundingClientRect().top <
//         trees[index].getBoundingClientRect().bottom
//     );
//     if (overlap) {
//       crashcounter += count;
//       car.src = "./assets/img/car" + crashcounter + ".png";
//       console.log("crashcounter" + crashcounter);
//       return true;
//     }
//   }
//   return overlap;
// }
function crash() {
    trees = document.getElementsByClassName('tree');
    var overlap = false;
    for (var index = 0; index < trees.length; index++) {
        overlap = !(car.getBoundingClientRect().right < trees[index].getBoundingClientRect().left ||
            car.getBoundingClientRect().left > trees[index].getBoundingClientRect().right ||
            car.getBoundingClientRect().bottom < trees[index].getBoundingClientRect().top ||
            car.getBoundingClientRect().top > trees[index].getBoundingClientRect().bottom);
        if (overlap) {
            console.log("KOOP EEN RIJBEWIJS OFZO");
            crashcounter++;
            document.getElementById("crashcounter").innerHTML = crashcounter;
            car.src = "./assets/img/car" + crashcounter + ".png";
            if (crashcounter <= 5) {
                // can_drive = false;
            }
            return true;
        }
    }
    return overlap;
}
