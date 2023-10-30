<?php
    $N = (int) fgets(STDIN);
    for ($i=1; $i<=$N; $i++)
    {
        for ($j=0; $j<=1; $j++)
        {
            echo $i . " " . $i*$i + $j . " " . $i*$i*$i + $j . "\n"; 
        }
    }
?>