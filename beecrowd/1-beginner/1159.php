<?php
    $N = (int) fgets(STDIN);
    while ($N != 0)
    {
        if (abs($N)%2 == 1)
        { // odd
            $N += 1;
        }
        $sum = 0;
        for ($i=0; $i<5; $i++)
        {
            $sum += $N;
            $N += 2;
        }
        echo $sum . PHP_EOL;
        $N = (int) fgets(STDIN);
    }
?>