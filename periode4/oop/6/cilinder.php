<?php
class Cilinder extends Figuur
{

    public function __construct($Ih, $Ir)
    {
        parent::__construct($Ih, $Ir);
    }


    /**
     * @return mixed
     */
    public function getH()
    {

        return $this->x;
    }

    /**
     * @return mixed
     */
    public function getR()
    {
        return $this->y;
    }

    public function berekenOppervlakte()
    {
        print_r(" cilinder oppervlakte: ");

        $cirkel = 2 * 3.14 * $this->x * $this->x;
        $buis = 2 * 3.14 * $this->x * $this->y;

        return $cirkel + $buis;

    }
}