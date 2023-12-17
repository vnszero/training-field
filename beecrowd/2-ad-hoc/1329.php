<?php
    const MARY_STAKES = '0';
    const JOHN_STAKES = '1';
    do {
        $mary_points = 0;
        $john_points = 0;
        $N = (int) fgets(STDIN);
        if ($N == 0)
        {
            break;
        }
        $Rs = explode(' ', trim(fgets(STDIN)));
        foreach ($Rs as $R)
        {
            if ($R == MARY_STAKES)
            {
                $mary_points++;
            }
            else // JOHN_STAKES
            {
                $john_points++;
            }
        }
        echo "Mary won " . $mary_points . " times and John won " . $john_points . " times" . PHP_EOL;
    } while(1);
?>