<?php
    [$A, $B] = explode(' ', fgets(STDIN));
    $A = (int) $A;
    $B = (int) $B;
    $mid = 0;
    do {
        if ($A > $B)
        {
            $mid = $B;
            $big = $A;
        }
        else
        {
            $mid = $A;
            $big = $B;
        }
        
        $C = 2*$mid - $big;

        echo $C . PHP_EOL;

        [$A, $B] = explode(' ', fgets(STDIN));
        $A = (int) $A;
        $B = (int) $B;
        $mid = 0;
    } while($A);
?>