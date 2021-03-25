/*
https://stackoverflow.com/questions/33581515/snake-movement-in-snake-game

*/
console.info('js has been planted')
const socket = io('ws://localhost:8080');
let container = document.getElementById("container") // grabs the page


socket.on('message', text => {
    //the message comes in as user said key so we strip this to apply our magic 
    const position = text.slice(-1); //magic
    user = text.slice(0, 2); //magic
    // console.log(text); prints the intire message 
    console.log("user: " + user); // gives the user
    console.log("pos: " + position); // and wich command they entered

    //updates the position of the snak
     let dict = [{ 
            user: "wF",
            position: "1-5",
            lenght: "10"
        },
        {
            user: "Vh",
            position: "5-7",
            lenght: "100"
        }
    ]
    console.log(dict)
    // if (user = )
});
<<<<<<< HEAD
let boardsize = '10'

function drawboard() { // draws the board with div's cell's

    for (let y = 0; y < boardsize; y++) { // makes the grid format is x-y
        for (let x = 0; x < boardsize; x++) {
=======

function draw_snake(snake_array) {
    for (let y = 0; y < 10; y++) { // makes the grid format is x-y
        for (let x = 0; x < 10; x++) {
>>>>>>> dev
            container.innerHTML += "<div id='" + x + "-" + y + "' class='cell'></div>";
        }
        container.innerHTML += '<br>';
    }
}
<<<<<<< HEAD
drawboard();

//this calculates the mid position 
let halfboardsize = Math.round(boardsize / 2);



=======


let snake_array;
function create_snake(){
    var length = 5;
    snake_array = [];
    for(var i = length-1; i>=0; i--){
        snake_array.push({x: i, y:0});
    }
}
create_snake();
draw_snake();
// console.log(snake_array)
// var nx = snake_array[0].x;
//     var ny = snake_array[0].y;
//     if(key == "right") nx++;
//     else if(key == "left") nx--;
//     else if(key == "up") ny--;
//     else if(key == "down") ny++;
>>>>>>> dev

document.addEventListener("keydown", function logKey(e) { // catches the keyboard event and sends the message to the server with wich key and user
    var key = e.key;
    if (key == "w") {
        // console.log("arrow up");
        socket.emit('message', key)
        ny--;
    }
    if (key == "s") {
        // console.log("arrow down");
        socket.emit('message', key)
        ny++;
    }
    if (key == "a") {
        // console.log("arrow left");
        socket.emit('message', key)
        nx--;
    }
    if (key == "d") {
        // console.log("arrow right");
        socket.emit('message', key)
        nx++;
    }
    console.log(snake_array);
});
<<<<<<< HEAD

function tick() {

}
// function create_snake(x,y,user){
//     document.getElementById(""+ x +"-"+ y +"").innerHTML += user
// }
// create_snake(7,4,'yz');
=======
>>>>>>> dev
