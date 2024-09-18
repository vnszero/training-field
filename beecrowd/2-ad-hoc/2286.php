<?php
    $N = (int) fgets(STDIN);
    $count = 1;
    while($N != 0)
    {
        $name_even = fgets(STDIN);
        $name_odd = fgets(STDIN);

        echo "Teste " . $count . PHP_EOL;

        for ($i = 0; $i < $N; $i++)
        {
            [$a, $b] = array_map('intval', explode(' ', trim(fgets(STDIN))));

            if (($a + $b) % 2 == 0)
            {
                echo $name_even;
            }
            else
            {
                echo $name_odd;
            }
        }

        echo PHP_EOL;
        
        $count++;
        $N = (int) fgets(STDIN);
    }
?>