<?php

$voornaam = "constantijn"; // je voornaam
$tussenvoegsel = "van"; // je tussenvoegsel
$achternaam = "hartesveldt"; // je achternaam

$volledigeNaam = "$voornaam  $tussenvoegsel  $achternaam"; // plak hier de 3 bovenstaande variabelen aan elkaar, met spaties
echo "$volledigeNaam";
$geboortedag = "17"; // je geboortedag
$geboortemaand = "juni"; // je geboortemaand
$geboortejaar = 2004; // je geboortejaar
$huidig_jaartal = 2019;

$leeftijd = $huidig_jaartal - $geboortejaar; // bereken hier jouw leeftijd op basis van de eerder ingevulde geboortegegevens.

$dag_van_het_jaar = 0; // bereken hier hoeveelste dag van dit kalenderjaar het is

$straat = "liszthof"; // je straat;
$huisnummer = "28"; // je huisnummer;
$woonplaats = "alphen aan den rijn"; // je woonplaats;
$woonachtig_in_utrecht = ""; // check hier dmv een boolean of jouw woonplaats gelijk is aan "Utrecht"

$aantal_studenten_in_deze_klas = 69;
$kosten_van_frikandelbroodje = 1.76;
$totale_lunchkosten = ($aantal_studenten_in_deze_klas * $kosten_van_frikandelbroodje); // bereken hier het totaalbedrag als iedere student 2 frikandelbroodjes zou kopen
echo $totale_lunchkosten;

?>