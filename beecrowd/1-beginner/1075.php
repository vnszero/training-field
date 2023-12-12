<?php
    $value = fgets(STDIN);
    for ($n=2; $n<10000; $n+=$value)
    {
        echo $n . PHP_EOL;
    }
?>