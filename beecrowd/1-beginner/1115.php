<?php
    do {
        $input = explode(' ', fgets(STDIN));
        $x = (int) $input[0];
        $y = (int) $input[1];

        if ($y > 0 && $x > 0)
        {
            echo "primeiro" . PHP_EOL;
        }
        elseif ($y > 0 && $x < 0)
        {
            echo "segundo" . PHP_EOL;
        }
        elseif ($y < 0 && $x < 0)
        {
            echo "terceiro" . PHP_EOL;
        }
        elseif ($y < 0 && $x > 0)
        {
            echo "quarto" . PHP_EOL;
        }
    } while ($x != 0 && $y != 0);
?>