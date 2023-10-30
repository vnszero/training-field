<?php
    $cards = explode(" ", trim(fgets(STDIN)));
    if ($cards[0] == $cards[1])
    {
        echo $cards[0] . "\n";
    }
    else if ($cards[0] > $cards[1])
    {
        echo $cards[0] . "\n";
    }
    else
    {
        echo $cards[1] . "\n";
    }
?>