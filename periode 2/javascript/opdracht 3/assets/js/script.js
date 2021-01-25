var myObj; // basic declaration of json-array
var videoID = 0; // basis declaration of what videoID to play
var xmlhttp = new XMLHttpRequest(); // prepare new XMLHttpRequest
xmlhttp.open("GET", "playlist.json", true); // open json file 'playlist.json'

// xmlhttp.open("GET", "https://www.themealdb.com/api/json/v1/1/search.php?f=b", true); // open json file 'playlist.json'

xmlhttp.send(); // process json code
xmlhttp.onreadystatechange = function () { // when processing complete
    if (this.readyState == 4 && this.status == 200) { // when processing is successful
        myObj = JSON.parse(this.responseText); // fill myObj parameter with result of parser
    }
}

function playvideo() {
    var sourceplayer = document.getElementById("videoplayer"); // get videoplayer iframe
    if (myObj.length == videoID) {
        videoID = 0; // reset videoID after last video played
    }
    sourceplayer.src = myObj[videoID].youtube_url + "?autoplay=1"; // fill src of iframe

    // TODO Hier komt de code die je er zelf bij moet typen

    videoID++; //  raise videoID, so next video will be played on click
}