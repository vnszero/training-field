<?php
    while(($input = trim(fgets(STDIN))) != null)
    {
        $result = 0;
        [$R, $other] = explode("+", $input);
        [$L, $J] = explode("=", $other);
        if ($R == 'R')
        {
            $result = $J - $L;
        }
        else
        {
            if ($L == 'L')
            {
                $result = $J - $R;
            }
            else
            {
                $result = $R + $L;
            }
        }
        echo $result . PHP_EOL;
    }
?>