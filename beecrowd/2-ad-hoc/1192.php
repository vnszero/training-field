<?php
    $times = (int) fgets(STDIN);

    for ($i=0; $i<$times; $i++)
    {
        $input = fgets(STDIN);
        $N1 = $input[0];
        $L = $input[1];
        $N2 = $input[2];

        if ($N1 == $N2)
        {
            echo $N1*$N2 . PHP_EOL;
        }
        else
        {
            if ('a' <= $L and $L <= 'z')
            {
                echo $N1+$N2 . PHP_EOL;
            }
            else
            {
                echo $N2-$N1 . PHP_EOL;
            }
        }
    }
?>