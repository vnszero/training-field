<?php
    $N = (int)fgets(STDIN);
    do {
        $lower = 0;
        $lower_name = null;
        for ($i = 0; $i < $N; $i++)
        {
            [$name, $year, $time] = explode(' ', fgets(STDIN));
            if ($lower > (int) $year - (int) $time || $lower_name == null)
            {
                $lower = (int) $year - (int) $time;
                $lower_name = $name;
            }
        }
        echo $lower_name . PHP_EOL;
        $N = (int)fgets(STDIN);
    } while($N != 0)
?>