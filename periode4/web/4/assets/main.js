// this script is so elements get a random hex color wich makes it easier to debug certain stuff
const debug = document.getElementsByClassName('debug')
for (let i = 0; i < debug.length; i++) {
    debug[i].style.backgroundColor = '#' + Math.floor(Math.random()*16777215).toString(16);
    console.log(debug)
}