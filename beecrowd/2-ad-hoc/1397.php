<?php
    $N = (int) fgets(STDIN);
    do {
        $score = [0, 0];
        for ($i = 0; $i < $N; $i++)
        {
            [$A, $B] = explode(' ', fgets(STDIN));
            if ($A > $B)
            {
                $score[0]++;
            }
            elseif ($A < $B)
            {
                $score[1]++;
            }
        }
        echo $score[0] . " " . $score[1] . PHP_EOL;
        $N = (int) fgets(STDIN);
    } while ($N > 0);
?>