<?php
    $i = 0;
    $i_int = 0;
    while ($i<=2)
    {
        for($j=1; $j<4; $j++)
        {
            $out = 'I=';
            if ($i_int%5 == 0)
            {
                $out .= $i;
            }
            else
            {
                $out .= number_format($i, 1, '.', ',');
            }
            $out .= " J=";
            if ((($j+$i)*10)%10 == 0)
            {
                $out .= (int) $j+$i;
            }
            else
            {
                $out .= number_format($j+$i, 1, '.', ',');
            }
            echo "$out" . PHP_EOL;
        }
        $i_int+=1;
        $i+=0.2;
    }
?>