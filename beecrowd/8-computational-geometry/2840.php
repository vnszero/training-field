<?php
    $PI = 3.1415;
    [$R, $L] = explode(' ', fgets(STDIN));
    
    $v = (4/3) * $PI * $R ** 3;
    $many = ((int) $L) / $v;
    echo ((int) $many) . PHP_EOL;
?>