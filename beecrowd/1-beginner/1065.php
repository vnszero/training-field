<?php
    $even = 0;
    for (int $i=0; $i<5; $i++)
    {
        $N = (int) fgets(STDIN);
        if ($N % 2 == 0)
        {
            $even += 1;
        }
    }
    echo $even . " valores pares" . PHP_EOL;
?>