<?php
    $scores = [];
    $valid = 0;
    do {
        $val = (float) fgets(STDIN);
        if ($val >= 0.0 && $val <= 10.0)
        {
            $scores[$valid] = $val;
            $valid++;
            if ($valid == 2)
            {
                $result = 0;
                foreach ($scores as $score)
                {
                    $result += $score;
                }
                $result /= 2;
                $valid = 0;
                echo "media = " . number_format($result, 2, '.', ',') . PHP_EOL;
                do {
                    echo "novo calculo (1-sim 2-nao)" . PHP_EOL;
                    $input = (int) fgets(STDIN);
                } while($input != 1 && $input != 2);
            }
        }
        else
        {
            echo "nota invalida" . PHP_EOL;
            $input = 1;
        }
    } while ($input != 2);
?>