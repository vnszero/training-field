<?php
    $T = (int) fgets(STDIN);

    for ($i = 1; $i <= $T; $i++) {
        $incoming = explode(' ', trim(fgets(STDIN)));
        $N = (int) array_shift($incoming);
    
        // sort incoming
        sort($incoming);
    
        // captain is locatade in the mid
        $captain_age = $incoming[intval($N / 2)];
    
        echo "Case $i: $captain_age" . PHP_EOL;
    }
?>