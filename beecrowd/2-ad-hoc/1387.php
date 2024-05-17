<?php
    [$L, $R] = explode(' ', fgets(STDIN));
    do {
        echo (int) $L + (int) $R . PHP_EOL;
        [$L, $R] = explode(' ', fgets(STDIN));
    } while($L != 0 and $R != 0);
?>