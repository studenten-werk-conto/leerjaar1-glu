const server = require('http').createServer();
const io = require('socket.io')(server);
// const MongoClient = require('mongodb').MongoClient;
// const assert = require('assert');

// const url = 'mongodb+srv://cvanh:0969@cluster0.d5rr0.mongodb.net/test'; // connection url this is supposed to bea secret

// const dbName = 'test';
// const client = new MongoClient(url);
// // Use connect method to connect to the server
// client.connect(function(err) {
//   assert.equal(null, err);
//   console.log('Connected successfully to server');

//   const db = client.db(dbName);

//   client.close();
// });

io.on('connection', client => {
  client.on('event', data => {
      console.log('pwpwpwpwpw')
   });
  client.on('disconnect', () => { 
      console.log('a user has been disconnected')
   });
});
server.listen(3000);