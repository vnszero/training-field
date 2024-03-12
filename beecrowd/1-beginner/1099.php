<?php
    function findSum($a, $b)
    {
        $sum = 0;
        for ($j = $a+1; $j < $b; )
        {
            if ($j % 2 == 1)
            {
                $sum += $j;
                $j += 2;
            }
            else
            {
                $j++;
            }
        }
        return $sum;
    }
    $N = (int) fgets(STDIN);
    for ($i = 0; $i < $N; $i++)
    {
        $input = explode(' ', fgets(STDIN));
        $x = (int) $input[0];
        $y = (int) $input[1];

        if ($x < $y)
        {
            $sum = findSum($x, $y);
        }
        else 
        {
            $sum = findSum($y, $x);
        }
        echo $sum . PHP_EOL;
    }
?>