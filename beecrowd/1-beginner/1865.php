<?php
    $C = (int) fgets(STDIN);
    for ($i = 0; $i < $C; $i++)
    {
        [$candidate, $force] = explode(' ', fgets(STDIN));
        $result = $candidate === 'Thor' ? 'Y' : 'N';
        echo $result . PHP_EOL;
    }
?>