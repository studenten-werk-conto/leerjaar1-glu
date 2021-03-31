"use strict";

var database = firebase.database();
game = FB.child('game');

function writeUserData(userId, name, email, imageUrl) {
  firebase.database().ref('users/' + userId).set({
    username: name,
    email: email,
    profile_picture: imageUrl
  });
}

writeUserData();