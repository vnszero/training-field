<?php
    function calculate($dividend, $divisor, $rest)
    {
        if ($dividend % $divisor == $rest) {
            echo "$dividend" . PHP_EOL;
        }
    }

    function searchNumbers($a, $b, $divisor, ...$rests)
    {
        for ($i = $a + 1; $i < $b; $i++)
        {
            if(is_array($rests))
            {
                foreach ($rests as $rest)
                {
                    calculate($i, $divisor, $rest);
                }
            }
            else
            {
                calculate($i, $divisor, $rests);
            }
        }
    }

    $x = (int) trim(fgets(STDIN));
    $y = (int) trim(fgets(STDIN));
    if ($x < $y)
    {
        searchNumbers($x, $y, 5, 2, 3);
    }
    else
    {
        searchNumbers($y, $x, 5, 2, 3);
    }
?>