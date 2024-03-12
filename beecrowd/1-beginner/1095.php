<?php
    $i = 1;
    for ($j = 60; $j >= 0; $j-=5)
    {
        echo "I=$i J=$j" . PHP_EOL;
        $i += 3;
    }
?>