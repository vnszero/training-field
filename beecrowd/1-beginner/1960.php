<?php
    function show_part(int $part_of_value, 
        int $nine_reference, int $five_reference, int $four_reference, int $one_reference,
        string $simbol10th, string $simbol5th, string $simbol1st)
    {
        if ($part_of_value == $nine_reference)
        { // 9th
            echo $simbol1st . $simbol10th;
        }
        elseif ($part_of_value >= $five_reference)
        { // 8th -> 5th
            echo $simbol5th;
            $part_of_value -= $five_reference;
            $times = $part_of_value/$one_reference;
            for ($i=0; $i < $times; $i++)
            {
                echo $simbol1st;
            }
        }
        elseif ($part_of_value == $four_reference)
        { // 4th
            echo $simbol1st . $simbol5th;
        }
        else
        { // 3rd -> 1st
            $times = $part_of_value/$one_reference;
            for ($i=0; $i < $times; $i++)
            {
                echo $simbol1st;
            }
        }
    }

    $value = (int) fgets(STDIN);
    $unit_of_value = $value%10;
    $ten_of_value = $value%100 - $unit_of_value;
    $hundred_of_value = $value%1000 - $ten_of_value - $unit_of_value;

    show_part($hundred_of_value, 900, 500, 400, 100, "M", "D", "C");
    show_part($ten_of_value, 90, 50, 40, 10, "C", "L", "X");
    show_part($unit_of_value, 9, 5, 4, 1, "X", "V", "I");
    echo PHP_EOL;
?>