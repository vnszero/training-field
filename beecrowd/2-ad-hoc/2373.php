<?php
    $N = (int) fgets(STDIN);
    $amount = 0;
    for ($i = 0; $i < $N; $i++)
    {
        [$L, $C] = explode(' ', fgets(STDIN));
        if ((int) $L > (int) $C)
        {
            $amount += $C;
        }
    }
    echo $amount . PHP_EOL;
?>