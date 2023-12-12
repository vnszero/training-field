<?php
    $N = fgets(STDIN);
    for ($i=1; $i<11; $i++)
    {
        echo $i . " x " . (int) $N . " = " . $i*$N . PHP_EOL;
    }
?>