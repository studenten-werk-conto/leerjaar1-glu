// import * as dat from 'dat.gui';
// const gui = new dat.GUI();
// https://www.youtube.com/watch?v=k238XpMMn38 
var trees; // maakt een var voor dat je hem oproept
var overlap = false; // als true wordt dan is de auto gechrashed
var debug = true; // als de debug 
var snelheid = 100; // snelheid TODO FIX
var beweeg = document.getElementById("beweeg");
var left = 100;
var topp = 100;
var car = document.getElementById("car"); // roept de auto in html naar js
var crashcounter = document.getElementById("crashcounter");
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
    img.style.left = Math.random() * 1600 + '%';
    img.style.top = Math.random() * 1600 + '%';
    document.getElementById("container").appendChild(img);
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
    }
    return overlap;
}
