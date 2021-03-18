<?php

// $_POST is een PHP variabele die form-gegevens opslaat.
// We kunnen controleren of een formulier verzonden is 
//   door het aantal items in $_POST te tellen.
if( count($_POST) > 0 ){
	
	// Vang de gegevens van het formulier op in variabelen.
	$naam = $_POST['input_naam'];
	$leeftijd = $_POST['input_leeftijd'];
	$klas = $_POST['input_klas'];
	$html = isset($_POST['input_kwaliteiten_html']);
	$css = isset($_POST['input_kwaliteiten_css']);
	$js = isset($_POST['input_kwaliteiten_js']);
	$php = isset($_POST['input_kwaliteiten_php']);
	$mysql = isset($_POST['input_kwaliteiten_mysql']);
	$python = isset($_POST['input_kwaliteiten_python']);
	$uurloon = $_POST['input_verdien'];
	$werkuren = $_POST['input_werkuur'];

	// This is where your magic happens....
	echo "<br><br>";
	
	/*
	Hallo Henk, jij zit in klas 1WDV1-b.
	Je bent 15 jaar en hebt nog geen stemrecht.
	Je bent goed in: HTML Javascript
	En je verdient 5.66 per uur, x 6 uur is 33.96 per week.
	*/
	
}

?>
<!DOCTYPE html>
<html lang="nl">
<head>
<meta charset="UTF-8">
<meta name="viewport" content="width=device-width, initial-scale=1.0">
<title>PHP Eindopdracht - Typ hier je eigen naam en klas code</title>
<link href="https://fonts.googleapis.com/css2?family=Montserrat:wght@200;800&display=swap" rel="stylesheet">
<link href="css/style.css" rel="stylesheet">
</head>
<body>


<h2>Wie ben je? Wat kan je?</h2>
<form method="POST">

	<label for="input_naam">Naam:</label>
	<input type="text" name="input_naam" id="input_naam">

	<label for="input_leeftijd">Leeftijd:</label>
	<select name="input_leeftijd" id="input_leeftijd">
		<option SELECTED value="0">0</option>
		
		<!-- Kan je hier een loop plaatsen die alle 40 opties plaatst? -->
		<option value="40">40</option>
		
	</select>
	
	<label for="input_klas">Klas:</label>
	<fieldset id="input_naam">
		<label><input CHECKED type="radio" value="0" name="input_klas">-Onbekend-</label>
		<label><input type="radio" value="1WDV1-a" name="input_klas">1WDV1-a</label>
		<label><input type="radio" value="1WDV1-b" name="input_klas">1WDV1-b</label>
		<label><input type="radio" value="1WDV2-a" name="input_klas">1WDV2-a</label>
		<label><input type="radio" value="1WDV2-b" name="input_klas">1WDV2-b</label>
	</fieldset>
  
  	<label for="input_kwaliteiten">Kwaliteiten:</label>
	<fieldset id="input_kwaliteiten">
		<label><input type="checkbox" value="HTML" name="input_kwaliteiten_html">HTML</label>
		<label><input type="checkbox" value="CSS" name="input_kwaliteiten_css">CSS</label>
		<label><input type="checkbox" value="JavaScript" name="input_kwaliteiten_js">JavaScript</label>
		<label><input type="checkbox" value="PHP" name="input_kwaliteiten_php">PHP</label>
		<label><input type="checkbox" value="MySQL" name="input_kwaliteiten_mysql">MySQL</label>
		<label><input type="checkbox" value="Python" name="input_kwaliteiten_python">Python</label>
	</fieldset>
  	
  	<label for="input_verdien">Hoeveel verdien je per uur? (maximaal 2 decimalen)</label>
	<input type="number" name="input_verdien" id="input_verdien" step="0.01">
	
	<label for="input_werkuur">Hoeveel uur werk je per week? (afronden op heel uur)</label>
	<input type="number" name="input_werkuur" id="input_werkuur">

	<input type="submit" name="verstuurknop" value="Verstuur">
	
</form>


</body>
</html>