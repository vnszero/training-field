<?php
    $N = (int) fgets(STDIN);
    for ($i = 0; $i < $N; $i++)
    {
        $input = explode(' ', fgets(STDIN));
        $x = (int) $input[0];
        $y = (int) $input[1];

        $count_odd = 0;
        $sum = 0;
        for ($j = $x; $count_odd < $y; )
        {
            if ($j % 2 == 0)
            {
                $j++;
            }
            else
            {
                $sum += $j;
                $j += 2;
                $count_odd++;
            }
        }
        echo $sum . PHP_EOL;
    }
?>