const form = document.getElementById('form');
const aanhef = document.getElementById('aanhef');
const voornaam = document.getElementById('voornaam');
const achternaam = document.getElementById('achternaam');
const straat = document.getElementById('straat');
const nummer = document.getElementById('nummer');
const post = document.getElementById('post');
const plaats = document.getElementById('plaats');
const land = document.getElementById('land');
const email = document.getElementById('email');
const telenum = document.getElementById('telenum');
const agv = document.getElementById('agv');
const vraag = document.getElementById('vraag');
const aanhef2 = document.getElementById('aanhef2');
const voornaam2 = document.getElementById('voornaam2');
const achternaam2 = document.getElementById('achternaam2');
const straat2 = document.getElementById('straat2');
const nummer2 = document.getElementById('nummer2');
const post2 = document.getElementById('post2');
const plaats2 = document.getElementById('plaats2');
const land2 = document.getElementById('land2');
var errors = 0;
var submited = false;
form.addEventListener('submit', e => {
	e.preventDefault();
	
	checkInputs();
	
});

form.addEventListener('submit', f => {
	f.preventDefault();

	next();
});



function checkInputs() {
    const aanhefValue = aanhef.value.trim();
    const voornaamValue = voornaam.value.trim();
    const achternaamValue = achternaam.value.trim();
    const straatValue = straat.value.trim();
	const nummerValue = nummer.value.trim();
	const postValue = post.value.trim();
    const plaatsValue = plaats.value.trim();
    const landValue = land.value.trim();
    const emailValue = email.value.trim();
    const telenumValue = telenum.value.trim();
	const agvValue = agv.value.trim();
	const vraagValue = vraag.value.trim();
    const aanhef2Value = aanhef2.value.trim();
    const voornaam2Value = voornaam2.value.trim();
    const achternaam2Value = achternaam2.value.trim();
    const straat2Value = straat2.value.trim();
	const nummer2Value = nummer2.value.trim();
	const post2Value = post2.value.trim();
    const plaats2Value = plaats2.value.trim();
    const land2Value = land2.value.trim();

    if (aanhefValue === '') {
		setErrorFor(aanhef, 'Aanhef kan geen aanhef zijn.');
		errors ++;

	} else {
		setSuccessFor(aanhef);
    }
    
    if(voornaamValue === '') {
		setErrorFor(voornaam, 'Voornaam kan niet niks zijn.');
		errors ++;

	} else {
		setSuccessFor(voornaam);
    }

    if(achternaamValue === '') {
		setErrorFor(achternaam, 'Achternaam kan niet niks zijn.');
		errors ++;

	} else{
		setSuccessFor(achternaam);
    }
    
    if(straatValue === '') {
		setErrorFor(straat, 'Straatnaam kan niet niks zijn.');
		errors ++;

	} else{
		setSuccessFor(straat);
	}

	if (nummerValue === '') {
		setErrorFor(nummer, 'Straatnummer kan niet niks zijn.');
		errors ++;

	} else{
		setSuccessFor(nummer);
	}

	if (postValue === '') {
		setErrorFor(post,'Postcode kan niet niks zijn.');
		errors ++;

	} else{
		setSuccessFor(post);
	}

	if (plaatsValue === '') {
		setErrorFor(plaats,'Plaats kan niet niks zijn.');
		errors ++;

	} else{
		setSuccessFor(plaats);
    }
    
    if (landValue === '') {
		setErrorFor(land, 'Land kan niet niks zijn.');
		errors ++;

	} else{
		setSuccessFor(land);
    }
    
    if(emailValue === '') {
		setErrorFor(email, 'Email kan niet niks zijn.');
		errors ++;

	} else {
		setSuccessFor(email);
    }
    
    if(telenumValue === '') {
		setErrorFor(telenum, 'Telefoon nummer kan niet niks zijn.');
		errors ++;

	} else {
		setSuccessFor(telenum);
    }
    
    if(agvValue === ''){
		setErrorFor(agv, 'U moet akkoord gaan met de algemene voorwaarden');
		errors ++;

    } else {
        setSuccessFor(agv);
    }

    if (aanhef2Value === '') {
		setErrorFor(aanhef2, 'Aanhef kan geen aanhef zijn.');
		
	} else {
		setSuccessFor(aanhef2);
    }
    
    if(voornaam2Value === '') {
		setErrorFor(voornaam2, 'Voornaam kan niet niks zijn.');
	} else {
		setSuccessFor(voornaam2);
    }

    if(achternaam2Value === '') {
		setErrorFor(achternaam2, 'Achternaam kan niet niks zijn.');
	} else{
		setSuccessFor(achternaam2);
    }
    
    if(straat2Value === '') {
		setErrorFor(straat2, 'Straatnaam kan niet niks zijn.');
	} else{
		setSuccessFor(straat2);
	}

	if (nummer2Value === '') {
		setErrorFor(nummer2, 'Straatnummer kan niet niks zijn.');
	} else{
		setSuccessFor(nummer2);
	}

	if (post2Value === '') {
		setErrorFor(post2,'Postcode kan niet niks zijn.');
	} else{
		setSuccessFor(post2);
	}

	if (plaats2Value === '') {
		setErrorFor(plaats2,'Plaats kan niet niks zijn.');
	} else{
		setSuccessFor(plaats2);
    }
    
    if (land2Value === '') {
		setErrorFor(land2, 'Land kan niet niks zijn.');
	} else{
		setSuccessFor(land2);
	}
	
	if (vraagValue === 'ja') {
		if (postValue === post2Value) {
			setErrorFor(post2, 'Postcode kan niet hetzelde zijn.');
			document.getElementById('post2').value = '';
		}
		if (straatValue === straat2Value) {
			setErrorFor(straat2, 'Postcode kan niet hetzelfde zijn.');
			document.getElementById('straat2').value = '';
		}
	}

	if (vraagValue === 'nee') {
		 if (aanhefValue === ''){
			 setErrorFor(aanhef, 'Aanhef kan niet niks zijn.')
			 setErrorFor(aanhef2, 'Aanhef kan niet niks zijn.')
		 } else{
			 (document.getElementById('aanhef2').value = document.getElementById('aanhef').value);
			 setSuccessFor(aanhef2);
		 }
		 if (voornaamValue === ''){
			setErrorFor(voornaam, 'Voornaam kan niet niks zijn.')
			setErrorFor(voornaam2, 'Voornaam kan niet niks zijn.')
		} else{
			(document.getElementById('voornaam2').value = document.getElementById('voornaam').value);
			setSuccessFor(voornaam2);

		}if (achternaamValue === ''){
			setErrorFor(achternaam, 'Achternaam kan niet niks zijn.')
			setErrorFor(achternaam2, 'Achternaam kan niet niks zijn.')
		} else{
			(document.getElementById('achternaam2').value = document.getElementById('achternaam').value);
			setSuccessFor(achternaam2);

		}if (straatValue === ''){
			setErrorFor(straat, 'Aanhef kan niet niks zijn.')
			setErrorFor(straat2, 'Aanhef kan niet niks zijn.')
		} else{
			(document.getElementById('aanhef2').value = document.getElementById('aanhef').value);
			setSuccessFor(straat2);

		}if (nummerValue === ''){
			setErrorFor(nummer, 'Huisnummer kan niet niks zijn.')
			setErrorFor(nummer2, 'Huisnummer kan niet niks zijn.')
		} else{
			(document.getElementById('nummer2').value = document.getElementById('nummer').value);
			setSuccessFor(nummer2);

		}if (postValue === ''){
			setErrorFor(post, 'Postcode kan niet niks zijn.')
			setErrorFor(post2, 'Postcode kan niet niks zijn.')
		} else{
			(document.getElementById('post2').value = document.getElementById('post').value);
			setSuccessFor(post2);

		}if (plaatsValue === ''){
			setErrorFor(plaats, 'Plaatsnaam kan niet niks zijn.')
			setErrorFor(plaats2, 'Plaatsnaam kan niet niks zijn.')
		} else{
			(document.getElementById('plaats2').value = document.getElementById('plaats').value);
			setSuccessFor(plaats2);

		}if (landValue === ''){
			setErrorFor(land, 'Land kan niet niks zijn.')
			setErrorFor(land2, 'Land kan niet niks zijn.')
		} else{
			(document.getElementById('land2').value = document.getElementById('land').value);
            setSuccessFor(land2);

		}
	}	 
	if (errors > 0){
		document.getElementById("form").style.backgroundColor = "orange";
		alert(errors + " velden zijn niet goed in gevuld")
		errors = 0;
	 }else{
		document.getElementById("form").style.backgroundColor = "green";
		document.getElementById("form").style.backgroundColor = "green";
		document.getElementById("InfoList").innerHTML = ""
		document.getElementById("InfoList").innerHTML += "Aanhef: " + aanhefValue + ", Voornaam: " + voornaamValue  + ", Achternaam: " + 
		 achternaamValue  + ", Straat: " + 
		 straatValue  + ", Huisnummer: " + 
		 nummerValue  + ", Postcode: " + 
		 postValue  + ", Plaats: " + 
		 plaatsValue  + ", Land: " + 
		 landValue  + ", Email: " + 
		 emailValue  + ", Tel: " + 
		 telenumValue  + ", Akoord gegaan met algemene voorwaarden: " + 
		 agvValue  + ", Ander fractuuradress: " +
		 vraagValue 
		
		 document.getElementById("InfoList2").innerHTML = ""
		 document.getElementById("InfoList2").innerHTML = 
		
		"[ANDER FRACTUURADRESS] Aanhef*2: " +
		 aanhef2Value  + ", Voornaam*2: " + 
		 voornaam2Value  + ", Achternaam*2: " + 
		 achternaam2Value  + ", Straat*2:  " + 
		 straat2Value  + ", Huisnummer*2: " + 
		 nummer2Value  + ", Postcode*2: " + 
		 post2Value  + ", Plaats*2: " + 
		 plaats2Value  + ", Land*2: " + 
		 land2Value
	 }
		

	
}





function setErrorFor(input, message) {
	const formControl = input.parentElement;
	const small = formControl.querySelector('small');
	formControl.className = 'form-control error';
    small.innerText = message;
    document.getElementById("form").style.backgroundColor = "orange";
}

function setSuccessFor(input) {
	const formControl = input.parentElement;
    formControl.className = 'form-control success';

}

