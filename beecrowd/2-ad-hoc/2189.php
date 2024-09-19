<?php
    $N = (int) fgets(STDIN);
    $counter = 1;
    while($N)
    {
        echo "Teste " . $counter . PHP_EOL;
        $incoming = explode(' ', trim(fgets(STDIN)));

        for ($i = 0; $i < $N; $i++)
        {
            if ($i+1 == $incoming[$i])
            {
                echo $incoming[$i] . PHP_EOL;
            }
        }
        
        echo PHP_EOL;
        $counter++;
        $N = (int) fgets(STDIN);
    }
?>