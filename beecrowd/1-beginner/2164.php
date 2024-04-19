<?php
    $n = fgets(STDIN);
    $font1 = (1 + sqrt(5))/2;
    $font2 = (1 - sqrt(5))/2;
    $part1 = 1;
    $part2 = 1;
    for ($i = 0; $i < $n; $i++)
    {
        $part1 *= $font1;
        $part2 *= $font2;    
    }
    $fib = ($part1 - $part2) / sqrt(5);
    echo number_format($fib, 1, '.', '') . PHP_EOL;
?>