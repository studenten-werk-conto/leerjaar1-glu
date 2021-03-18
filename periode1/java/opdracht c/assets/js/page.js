var paddleHeight = 150; //hier onder zijn alemaal interger deze zijn geplaats om de game snel te kunnen tweaken
var paddleWidth = 10; 
var ballRadius = 25; 
var halfPaddleHeight = paddleHeight / 2; /
var speedOfPaddle1 = 0;
var positionOfPaddle1 = 460;
var speedOfPaddle2 = 0;
var positionOfPaddle2 = 460;
var topPositionOfBall = 510;
var leftPositionOfBall = 820;
var topSpeedOfBall = 0;
var leftSpeedOfBall = 0;
var score1 = 0;
var score2 = 0;

function startBall() { //maakt functie startball
	topPositionOfBall = 510;//interger
	leftPositionOfBall = 820;//interger
	if (Math.random() < 0.5) { // als random getal kleinde is dan 
		var side = 1
	} else {
		var side = -1
	}
	topSpeedOfBall = Math.random() * 2 + 3;
	leftSpeedOfBall = side * (Math.random() * 2 + 3);
};

document.addEventListener('keydown', function (e) {
     if (e.keyCode == 87 || e.which == 87) { // W key
      speedOfPaddle1 = -10; //als toets is ingedrukt 
     }
     if (e.keyCode == 83 || e.which == 83) { // S Key
      speedOfPaddle1 = 10; //als toets is ingedrukt 
     }
     if (e.keyCode == 38 || e.which == 38) { // up arrow
      speedOfPaddle2 = -10; //als toets is ingedrukt 
     }
     if (e.keyCode == 40 || e.which == 40) { // down arrow
      speedOfPaddle2 = 10; //als toets is ingedrukt 
     }
}, false);

document.addEventListener('keyup', function (e) {
	if (e.keyCode == 87 || e.which == 87) {
		speedOfPaddle1 = 0; //als toets is ingedrukt 
	}
	if (e.keyCode == 83 || e.which == 83) {
		speedOfPaddle1 = 0; //als toets is ingedrukt 
	}
	if (e.keyCode == 38 || e.which == 38) {
		speedOfPaddle2 = 0; //als toets is ingedrukt 
	}
	if (e.keyCode == 40 || e.which == 40) {
		speedOfPaddle2 = 0; //als toets is ingedrukt 
	}
}, false);

function print() {
	console.log(positionOfPaddle1); //print de postite van paddle1 in de console
}

window.setInterval(function show() {
	positionOfPaddle1 += speedOfPaddle1; // deze 4 regels voegen 2 intergers samen
	positionOfPaddle2 += speedOfPaddle2;
	topPositionOfBall += topSpeedOfBall;
	leftPositionOfBall += leftSpeedOfBall;

	if (positionOfPaddle1 <= 150) {// corigeert de positie als de positie zodat die onder de 150 blijft
		positionOfPaddle1 = 150;
	}
	if (positionOfPaddle2 <= 150) { //zelfde als de comment op line 68
		positionOfPaddle2 = 150;
	}
	if (positionOfPaddle1 >= window.innerHeight - paddleHeight) { // maakt de scaling of th padles
		positionOfPaddle1 = window.innerHeight - paddleHeight;
	}
	if (positionOfPaddle2 > window.innerHeight - paddleHeight) {
		positionOfPaddle2 = window.innerHeight - paddleHeight;
	}
	if (topPositionOfBall <= 150 || topPositionOfBall >= window.innerHeight - ballRadius) {
		topSpeedOfBall = -topSpeedOfBall // maakt de bal grooter of kleiner afhankelijk van het scherm wilde gok
	}
	if (leftPositionOfBall <= paddleWidth) {
		if (topPositionOfBall > positionOfPaddle1 && topPositionOfBall < positionOfPaddle1 + paddleHeight) {
			leftSpeedOfBall = -leftSpeedOfBall;// checkt of de ball de paddle wel heeft geraakt dmv een ongwikkeld algorimthe
		} else {
			score2++;
			startBall();
		}
	}
	if (leftPositionOfBall >= window.innerWidth - ballRadius - paddleWidth) {
		if (topPositionOfBall > positionOfPaddle2 && topPositionOfBall < positionOfPaddle2 + paddleHeight) {
			leftSpeedOfBall = -leftSpeedOfBall //zelde als de vorige statement
		} else {
			score1++
			startBall();
		}
	}
	document.getElementById("paddle1").style.top = (positionOfPaddle1) + "px";
	document.getElementById("paddle2").style.top = (positionOfPaddle2) + "px";
	document.getElementById("ball").style.top = (topPositionOfBall) + "px";
	document.getElementById("ball").style.left = (leftPositionOfBall) + "px";
	document.getElementById('score1').innerHTML = score1.toString();
	document.getElementById('score2').innerHTML = score2.toString();
}, 1000/60);