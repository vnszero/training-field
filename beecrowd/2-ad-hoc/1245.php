<?php
    $boots = [];
    $count = 0;
    while (($line = fgets(STDIN)) !== false)
    {
        $N = (int) $line;
        for ($i = 0; $i < $N; $i++){
            $input = explode(' ', fgets(STDIN));
            $M = (int) $input[0];
            $L = $input[1];
            if (!isset($boots[$M]))
            {
                $boots[$M] = (ord($L) == ord('D')) ? 1 : -1;
            }
            else
            {
                $op = ord($L) == ord('D');
                $boots[$M] += $op ? 1 : -1;
                if ($op)
                {
                    if ($boots[$M] <= 0)
                    {
                        $count++;
                    }
                }
                else
                {
                    if ($boots[$M] >= 0)
                    {
                        $count++;
                    }
                }
            }
        }
        echo $count . PHP_EOL;
        $boots = [];
        $count = 0;
    }
?>