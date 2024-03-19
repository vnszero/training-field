<?php
    $N = (int) fgets(STDIN);
    $collection = [];
    for ($i=0; $i<$N; $i++) 
    {
        $line = (int) fgets(STDIN);
        $collection[$line] = isset($collection[$line]) ? $collection[$line] + 1 : 1;   
    }

    for ($x=1; $x<=2000; $x++)
    {
        if (isset($collection[$x]))
        {
            echo "$x aparece {$collection[$x]} vez(es)" . PHP_EOL;
        }
    }
?>