// const { ComplexDependencies } = require("mathjs");

// import 'mathjs';
// Complex

console.log(math.sqrt(-4).toString()) // 2i dit is een test om te kijken of de mathjs library wel goed werkt deze code is direct uit de documantatie


let scherm = document.getElementById("scherm");
let knoppen = document.getElementsByTagName("button");

for( let i = 0; i<knoppen.length; i++) {
    let knop = knoppen[i];
    knop.addEventListener("click", knopGeklikt);
    console.log("aantal knoppen;");
    

}
function knopgeluid(event) {
    var geluid = new Audio();
    console.log("er wordt een geluid afgespeeld");
    
}
function set_getMem(){ 
  var memvalue("");
  console.log(memvalue);
}


function knopGeklikt(event) {// de enige reden die ik heb om di te commenten is de hoop voor een hoger cijfer want bestelformulier ging zwaar kut dus, dit stuk code maakt een functie en op basis van de parameter wordt er een stuk code uit gevoerd
    switch (event.currentTarget.id) {
        case "waardeloos": scherm.value += "0"; knopgeluid();    break; // bijv hier, ik ga dit niet uitleggen
        case "een": scherm.value += "1";knopgeluid();    break;
        case "twee": scherm.value += "2";knopgeluid();   break;
        case "drie": scherm.value += "3";knopgeluid();   break;
        case "vier": scherm.value += "4";knopgeluid();   break;
        case "vijf": scherm.value += "5";knopgeluid();   break;
        case "zes": scherm.value += "6";knopgeluid();   break;
        case "zeven": scherm.value += "7";knopgeluid();   break;
        case "acht": scherm.value += "8";knopgeluid();   break;
        case "negen": scherm.value += "9";knopgeluid();   break;
        case "optellen": scherm.value += "+";knopgeluid();   break;
        case "is": scherm.value = math.evaluate(scherm.value);knopgeluid();   break;
        case "vermenigvuldigen": scherm.value += "*";knopgeluid();   break;
        case "gedeeld": scherm.value += "/";knopgeluid();   break;
        case "punt": scherm.value += ".";knopgeluid();   break;
        case "leeg": scherm.innerHTML == "";knopgeluid();   break;
        case "π": scherm.value += "3.14159265359";knopgeluid();   break;
        case "cos": scherm.value = math.cos(scherm.value); knopgeluid();   break;
        case "tan": scherm.value = math.tan(scherm.value);knopgeluid();   break;
        case "sin": scherm.value = math.sin(scherm.value);knopgeluid();   break;
        case "mem": set_getMem(scherm.value); knopgeluid();   break;
    }
}


/*
bij onKeyDown() op toetsenbord ook de knoppen aan kunnen sturen (zodat je met numpad ook de rekenmachine kunt gebruiken) dif: medium
toevoegen functionaliteiten: Procenten en Machtsverheffen dif easy with mathjs
Memory functie (oud antwoord onthouden, en terugroepen) dif easy-medium 
kopieer knop dif makkelijk
π π π π π π


*/
