<<<<<<< Updated upstream
// const { Collisions } = require('detect-collisions');
// https://www.youtube.com/watch?v=k238XpMMn38 ^^ importeerd een crash lib
var trees; // maakt een var voor dat je hem oproept
var overlap = false; // als true wordt dan is de auto gechrashed
var debug = true; // als de debug
var snelheid = 100; // snelheid TODO FIX
// let beweeg = document.getElementById("beweeg");
=======
// import * as dat from 'dat.gui';
// const gui = new dat.GUI();
// https://www.youtube.com/watch?v=k238XpMMn38 
var trees; // maakt een var voor dat je hem oproept
var overlap = false; // als true wordt dan is de auto gechrashed
var debug = true; // als de debug 
var snelheid = 100; // snelheid TODO FIX
var beweeg = document.getElementById("beweeg");
>>>>>>> Stashed changes
var left = 100;
var topp = 100;
var car = document.getElementById("car"); // roept de auto in html naar js
var crashcounter = document.getElementById("crashcounter");
<<<<<<< Updated upstream
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
car.style.left = left + "px";
car.style.top = topp + "px";
=======
// var FizzyText = function () {
//   this.message = 'dat.gui';
//   this.snelheid = 0.8;
//   this.displayOutline = false;
//   this.explode = function () {
//     console.log("je hebt iets aangeklikt in de cheat menu")
//   };
//   console.log("je hebt iets niet aan geklikt")
//   //   // Define render logic ...TODO FIX THIS FUCKING MESS WOULDNT IMPORT
// };
// window.onload = function () {
//   var text = new FizzyText();
//   var gui = new dat.GUI();
//   gui.add(text, 'message');
//   gui.add(text, 'snelheid', -5, 5);
//   gui.add(text, 'displayOutline');
//   gui.add(text, 'explode');
// };
// // einde cheat menu
for (var index = 0; index < 5; index++) { // spawnt bomen 
    var img = document.createElement("img");
    img.src = 'assets/img/tree.jpg';
    img.className = 'tree';
    // op line ↓ col 32 stond eerst 80 op line ↓↓ col 31 stond 80
    img.style.left = Math.random() * 90 + '%';
    img.style.top = Math.random() * 100 + '%';
    document.getElementById("container").appendChild(img);
}
beweeg.style.left = left + "px";
beweeg.style.top = topp + "px";
>>>>>>> Stashed changes
document.addEventListener("keydown", function logKey(e) {
    var key = e.key;
    if (debug == true) {
        console.log(key);
    }
    if (key == "ArrowUp") {
        topp--;
<<<<<<< Updated upstream
        car.style.transform = "rotate(-90deg)";
    }
    if (key == "ArrowDown") {
        topp++;
        car.style.transform = "rotate(-270deg)";
    }
    if (key == "ArrowLeft") {
        left--;
        car.style.transform = "rotate(180deg)";
    }
    if (key == "ArrowRight") {
        left++;
        car.style.transform = "rotate(0deg)";
    }
    //console.log(left + " : " + topp);
    car.style.left = left + "px";
    car.style.top = topp + "px";
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
// function crash() {
//   trees = document.getElementsByClassName("tree");
//    car = document.getElementById("beweeg");
//   var overlap = false;
//   for (let index = 0; index < trees.length; index++) {
//     overlap = !(
//       car.getBoundingClientRect().right <
//         trees[index].getBoundingClientRect().left ||
//       car.getBoundingClientRect().left >
//         trees[index].getBoundingClientRect().right ||
//       car.getBoundingClientRect().bottom <
//         trees[index].getBoundingClientRect().top ||
//       car.getBoundingClientRect().top >
//         trees[index].getBoundingClientRect().bottom
//     );
//     if (overlap) {
//       console.log("KOOP EEN RIJBEWIJS OFZO");
//       let een = 1;
//       crashcounter = + een;
//       document.getElementById("crashcounter").innerHTML = crashcounter;
//       car.src = "./assets/img/car" + crashcounter + ".png";
//       if (crashcounter <= 5) {
//         // can_drive = false;
//       }
//     }
//     return true;
//   }
//   return overlap;
// }
var can_drive;
function crash() {
    trees = document.getElementsByClassName("tree");
    car = document.getElementById("car");
    var overlap = false;
    for (var index = 0; index < trees.length; index++) {
        overlap = !(car.getBoundingClientRect().right <
            trees[index].getBoundingClientRect().left ||
            car.getBoundingClientRect().left >
                trees[index].getBoundingClientRect().right ||
            car.getBoundingClientRect().bottom <
                trees[index].getBoundingClientRect().top ||
            car.getBoundingClientRect().top >
                trees[index].getBoundingClientRect().bottom);
        if (overlap) {
            console.log("KOOP EEN RIJBEWIJS OFZO");
            var een = 1;
            crashcounter = +een;
            document.getElementById("crashcounter").innerHTML = crashcounter;
            car.src = "./assets/img/beweeg" + crashcounter + ".png";
            if (crashcounter <= 5) {
                can_drive = false;
            }
        }
        return true;
=======
    }
    if (key == "ArrowDown") {
        topp++;
    }
    if (key == "ArrowLeft") {
        left--;
    }
    if (key == "ArrowRight") {
        left++;
    }
    //console.log(left + " : " + topp);  
    beweeg.style.left = left + "px";
    beweeg.style.top = topp + "px";
});
function chrash() {
    var trees = document.getElementsByClassName("tree");
    var overlap = false;
    for (var index = 0; index < trees.length; index++) {
        overlap = !(car.getBoundingClientRect().right < trees[index].getBoundingClientRect().left ||
            car.getBoundingClientRect().left < trees[index].getBoundingClientRect().right ||
            car.getBoundingClientRect().bottom < trees[index].getBoundingClientRect().top ||
            car.getBoundingClientRect().top < trees[index].getBoundingClientRect().bottom);
        if (overlap) {
            crashcounter += "1";
            car.src = './assets/img/car' + crashcounter + '.png';
            console.log('crashcounter' + crashcounter);
            return true;
        }
>>>>>>> Stashed changes
    }
    return overlap;
}
