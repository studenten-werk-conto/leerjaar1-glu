import firebase from 'firebase/app'
import 'firebase/auth'
import 'firebase/storage'
import 'firebase/database'

var firebaseConfig = {
    apiKey: "AIzaSyCknUkPJypESvRggOepDvTJUFKQltmciDc",
    authDomain: "snek-b7d0f.firebaseapp.com",
    databaseURL: "https://snek-b7d0f-default-rtdb.europe-west1.firebasedatabase.app",
    projectId: "snek-b7d0f",
    storageBucket: "snek-b7d0f.appspot.com",
    messagingSenderId: "166633303771",
    appId: "1:166633303771:web:9ac27fa8adc9983bdde6fe"
  
};
firebase.initializeApp(firebaseConfig);
export default firebase