<?php
    $end = 20;
    $arr = [];
    for ($i = 0; $i < $end; $i++)
    {
        $arr[$end - 1 - $i] = (int) fgets(STDIN);
    }
    for ($i = 0; $i < $end; $i++)
    {
        echo "N[" . $i . "] = " . $arr[$i] . PHP_EOL;
    }
?>