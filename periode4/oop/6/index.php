<?php
require_once ('figuur.php');
require_once ('cilinder.php');
require_once ('vierkant.php');
require_once ('vierkant.php');
require_once ('rechthoek.php');

$cilinder = new Cilinder(10,3);
$vierkant = new Vierkant(5, 5);
$_vierkant = new Vierkant(10,10);
$_rechthoek = new Rechthoek(10,8);

echo $vierkant->berekenOppervlakte();
echo $cilinder->berekenOppervlakte();
echo $_vierkant->berekenOppervlakte();
echo $_rechthoek->berekenOppervlakte();
?>
