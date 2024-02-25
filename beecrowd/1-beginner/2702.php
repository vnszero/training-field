<?php
    $input = explode(' ', fgets(STDIN));
    $offer = array();
    $demand = array();
    foreach ($input as $in)
    {
        $offer[] = intval($in);
    }
    $input = explode(' ', fgets(STDIN));
    foreach ($input as $in)
    {
        $demand[] = intval($in);
    }
    
    $unavaible = 0;
    for ($i = 0; $i < count($offer); $i++)
    {
        if ($offer[$i] < $demand[$i])
        {
            $unavaible += $demand[$i] - $offer[$i];
        }
    }

    echo $unavaible . PHP_EOL;
?>