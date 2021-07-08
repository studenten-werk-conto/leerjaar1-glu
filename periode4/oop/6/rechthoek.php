<?php


class Rechthoek extends Figuur
{
    public function __construct($Ix, $Iy)
    {
        return parent::__construct($Ix, $Iy);
    }

    /**
     * @return mixed
     */
    public function getX()
    {
        return $this->x;
    }
    public function getY()
    {
        return $this->y;
    }


    public function berekenOppervlakte()
    {
        print_r(" rechthoek oppervlakte: ");
        return  $this->x * $this->y;

    }
}