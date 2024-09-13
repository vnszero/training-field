<?php
    $volume = (int) fgets(STDIN);
    $amount = 0;
    if ($volume > 100)
    {
        $amount += (($volume%100) + 100 * (floor($volume/100) - 1)) * 5;
        $volume = 100;
    }
    if ($volume > 30)
    {
        $amount += ($volume - 30) * 2;
        $volume = 30;
    }
    if ($volume > 10)
    {
        $amount += $volume - 10;
        $volume = 10;
    }
    $amount += 7;
    
    echo $amount . PHP_EOL;
?>