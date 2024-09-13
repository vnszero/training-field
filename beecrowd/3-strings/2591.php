<?php
    $times = (int) fgets(STDIN);
    for ($j = 0; $j < $times; $j++)
    {
        $incoming = str_split(fgets(STDIN));
        $machine = 0;
        $counter1 = 0;
        $counter2 = 0;
        foreach($incoming as $letter)
        {
            if ($machine == 0 && $letter == 'a')
            {
                $counter1++;
            }
            else if ($machine == 1 && $letter == 'a')
            {
                $counter2++;
            }
            else if ($letter == 'm')
            {
                $machine++;
            }
        }
        echo 'k';
        $limit = $counter1 * $counter2;
        for ($i = 0; $i < $limit; $i++)
        {
            echo 'a';
        }
        echo PHP_EOL;
    }
?>