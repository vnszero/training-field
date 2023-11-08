<?php
    $N = (int) fgets(STDIN);
    $max = 0;
    $current = (int) fgets(STDIN);
    $next = $current;
    for ($i=1; $i<=$N; $i++)
    {
        if ($current == $next)
        {
            if ($current == 1)
            {
                $next = 2;
            }
            else if ($current == 2){
                $next = 1;
            }
            $max += 1;
        }
        $current = (int) fgets(STDIN);
    }
    echo $max . PHP_EOL;
?>