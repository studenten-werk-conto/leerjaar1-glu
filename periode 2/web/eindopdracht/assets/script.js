const debug = true; // todo fix before prod
if (debug == true) {
  console.log("js is ingladen");  
}


let detail_pagina = document.getElementById("details");
let produceten_pagina = document.getElementById("kaarten");
let formulieren_pagina = document.getElementById("formulier");

function showform(){
    console.log("form wordt nu getoont");
    formulieren_pagina.style.display = "block";
    produceten_pagina.style.display = "block";
    detail_pagina.style.display = "block";
}

function showproducten(){
    console.log("producten worden nu getoont");
    formulieren_pagina.style.display = "none";
    produceten_pagina.style.display = "block";
    detail_pagina.style.display = "none"
}
function showdetails(){
    console.log("de product details worden nu getoont");
    formulieren_pagina.style.display = "none";
    produceten_pagina.style.display = "none";
    detail_pagina.style.display = "block"

}
showdetails(); 
//TODO REMOVE