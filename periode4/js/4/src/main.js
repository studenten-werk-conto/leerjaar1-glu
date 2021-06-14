// import {io} from "../node_modules/socket.io/client-dist/socket.io";
// const socket = io();
const socket = io('ws://localhost:8080');
const inputfield = document.getElementById('inputMessage');

inputfield.addEventListener('change',() => additem())

function additem(){
    const item = document.getElementById('inputMessage').value
    console.log('sending: ' + item + ' to server')
    socket.emit(item, item)
}
