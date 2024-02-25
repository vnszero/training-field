<?php
    $P = intval(fgets(STDIN));
    while(true)
    {
        $N = intval(fgets(STDIN));
        if ($N <= $P)
        {
            break;
        }
        else
        {
            $P = $N;
        }
    }
    echo ++$P . PHP_EOL;
?>