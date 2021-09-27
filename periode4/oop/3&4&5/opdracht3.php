<?php
class lamp{
    public $status = 'aan';
    public $kleurlamp = 'wit';
    public $standaart = 'drie stangen in de vorm van een tipi';
    public function __construct($naam){ //todo unfuck
        $this->naam=$naam;
    }
}
class kap extends lamp {
    public function licht(){
        echo " kleur met een kap is een lichte difuus van {$this -> kleurlamp} en";
    }
}
class knop extends lamp {
    public function knop(){
        if($this -> status == 'aan'){
            $this -> status == false;
            echo 'lamp staat'. $this -> status;
        }
        else{
            $this -> status == 'aan';
            echo 'lamp staat'.  $this -> status;

        }
    }
}
$ding = new lamp('lamp');
$knop = new knop('temp');
$kap = new kap('temp');
$kap -> licht();
$knop->knop();
?>