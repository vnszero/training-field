<?php
    [$A, $B, $C] = array_map('intval', explode(' ', trim(fgets(STDIN))));
    $out = 0;
    if ($A > $B && $A > $C)
    {
        if ($B > $C)
        {
            $out = $B;
        }
        else
        {
            $out = $C;
        }
    }
    else if ($B > $A && $B > $C)
    {
        if ($A > $C)
        {
            $out = $A;
        }
        else
        {
            $out = $C;
        }
    }
    else if ($A > $B)
    {
        $out = $A;
    }
    else
    {
        $out = $B;
    }
    echo $out . PHP_EOL;
?>