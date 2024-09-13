<?php
    while (($times = fgets(STDIN)) !== false)
    {
        $positive = 0;
        for ($i = 0; $i < $times; $i++)
        {
            $answer = fgetc(STDIN);
            fgetc(STDIN);
            if ($answer == '0')
            {
                $positive++;
            }
        }
        if ($times - $positive >= $positive)
        {
            echo 'N' . PHP_EOL;
        }
        else
        {
            echo 'Y' . PHP_EOL;
        }
    }
?>