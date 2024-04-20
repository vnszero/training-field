<?php
    $input = (int) fgets(STDIN);
    $enemies = [];
    
    $str = explode(' ', fgets(STDIN));
    
    $enemies[] = (int) $str[0];
    $lower = 0;
    
    for ($i = 1; $i < $input; $i++)
    {
        $enemies[] = (int) $str[$i];
        if ($enemies[$i] < $enemies[$lower])
        {
            $lower = $i;
        }
    }
    echo ($lower + 1) . PHP_EOL;
?>