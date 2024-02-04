<?php
    $M = (int) fgets(STDIN);
    $A = (int) fgets(STDIN);
    $B = (int) fgets(STDIN);
    $C = $M - $A - $B;
    if ($C > $A && $C > $B)
    {
        echo $C . PHP_EOL;
    }
    else if ($B > $C && $B > $A)
    {
        echo $B . PHP_EOL;
    }
    else
    {
        echo $A . PHP_EOL;
    }
?>