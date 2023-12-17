<?php
do {
    $inputs = explode(' ', trim(fgets(STDIN)));
    $x = (int) $inputs[0];
    $y = (int) $inputs[1];
    if ($x > $y)
    {
        echo "Decrescente" . PHP_EOL;
    } 
    else if ($x < $y)
    {
        echo "Crescente" . PHP_EOL;
    }
}while($x != $y);
?>