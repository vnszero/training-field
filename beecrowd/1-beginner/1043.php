<?php
    $inputs = explode(' ', trim(fgets(STDIN)));
    $A = (float) $inputs[0];
    $B = (float) $inputs[1];
    $C = (float) $inputs[2];
    if ($A >= $B + $C || $B >= $A + $C || $C >= $A + $B) 
    {
        // it isn't a triagle
        $area = ($A + $B) * $C / 2;
        echo "Area = " . number_format($area, 1, '.', ',');
    }
    else 
    {
        // it is a triagle
        $perimeter = $A + $B + $C;
        echo "Perimetro = " . number_format($perimeter, 1, '.', ',');
    }
    echo PHP_EOL;
?>