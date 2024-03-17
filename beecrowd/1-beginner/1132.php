<?php
    $sum = 0;
    $x = (int) trim(fgets(STDIN));
    $y = (int) trim(fgets(STDIN));
    if ($x < $y)
    {
        for ($i = $x; $i <= $y; $i++)
        {
            if ($i % 13 != 0)
            {
                $sum += $i;
            }
        }
    }
    else
    {
        for ($i = $y; $i <= $x; $i++)
        {
            if ($i % 13 != 0)
            {
                $sum += $i;
            }
        }
    }
    echo $sum . PHP_EOL;
?>