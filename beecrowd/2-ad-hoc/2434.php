<?php
    $inputs = explode(" ",trim(fgets(STDIN)));
    $N = (int) $inputs[0];
    $S = (int) $inputs[1];
    $lower = $S;
    for ($i=0; $i<$N; $i++)
    {
        $input = (int) fgets(STDIN);
        $S += $input;
        if ($S < $lower)
        {
            $lower = $S;
        }
    }
    echo ($lower . "\n");
?>