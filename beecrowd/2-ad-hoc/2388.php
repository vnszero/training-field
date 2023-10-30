<?php
    $N = fgets(STDIN);
    $sum = 0;
    for ($i = 0; $i < $N; $i++)
    {
        $info = explode(" ", trim(fgets(STDIN)));
        $T = $info[0];
        $V = $info[1];
        $sum += $T * $V;
    }
    echo $sum . "\n";
?>