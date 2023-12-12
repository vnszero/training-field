<?php
    $X_old = 1;
    $to_show = '1';
    do 
    {
        $X = (int) fgets(STDIN);
        if ($X <= 0)
        {
            break;
        }
        if ($X > $X_old)
        {
            for ($i=$X_old + 1; $i<=$X; $i++)
            {
                $to_show = $to_show . ' ' . $i;
            }
            echo $to_show . PHP_EOL;
        }
        else if ($X == $X_old)
        {
            echo $to_show . PHP_EOL;
        }
        else
        {
            $to_show = '1';
            for ($i=2; $i<=$X; $i++)
            {
                $to_show = $to_show . ' ' . $i;
            }
            echo $to_show . PHP_EOL;
        }
        $X_old = $X;
    } while (1);
?>