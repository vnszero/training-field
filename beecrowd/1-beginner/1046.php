<?php
    $inputs = explode(' ', trim(fgets(STDIN)));
    $begin = $inputs[0];
    $end = $inputs[1];
    if ($begin >= $end)
    {
        echo "O JOGO DUROU " . 24 + $end - $begin . " HORA(S)" . PHP_EOL;
    }
    else if ($begin < $end)
    {
        echo "O JOGO DUROU " . $end - $begin . " HORA(S)" . PHP_EOL;
    }
?>