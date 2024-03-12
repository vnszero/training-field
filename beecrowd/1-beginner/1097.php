<?php
    for ($i=1; $i<=9; $i+=2)
    {
        for ($j=$i+6; $j>=$i+4; $j--)
        {
            echo "I=$i J=$j" . PHP_EOL;
        }
    }
?>