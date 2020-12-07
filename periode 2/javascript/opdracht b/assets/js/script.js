/*
schrijf javascript voor:
klik op button1 wijzigt de volgorde van nieuwsartikelen
klik op button2 wijzigt de achtergrondkleur van nieuwsartikel: 3
klik op button3 verwijdert het 1-na-laatste nieuwsartikel
klik op button4 voegt een nieuw artikel toe op plek 1 met eigen invulling naar keuze, met minimaal 1 afbeelding 
(de tekst mag lorum ipsum zijn, mag ook een eigen artikel schrijven)
Maak een button5 aan, en kies zelf de functionaliteit voor deze button (het moet wel iets met de DOM doen)
*/
var button1 = document.getElementById("button1")
var button2 = document.getElementById("button2")
var button3 = document.getElementById("button3")
var button4 = document.getElementById("button4")
// var item3 = document.getElementById("item3")
button1.addEventListener("click", button2);

function button2() { //verandert kleur
  console.log ("kleur veranderen");
  document.body.style.backgroundColor = "red"; 
} 

button2.addEventListener("click", button1); // verandert volgorde

function button1() {
  console.log ("random shit");
} 

