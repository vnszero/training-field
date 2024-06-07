<?php
    function number_recover_exclamation_count(&$incoming, &$K)
    {
        $N = 0;
        $index = 0;

        while($incoming[$index] != '!')
        {
            $N = $N*10 + $incoming[$index];
            $index++;
        }
        $K = 0;
        while($incoming[$index] == '!')
        {
            $K = $K + 1;
            $index++;
        }

        return $N;
    }

    function calculate_and_show(&$N, &$K)
    {
        $result = $N;
        for ($i = $K; $N - $i > 0; $i = $i + $K)
        {
            $result *= ($N - $i);
        }

        echo $result . PHP_EOL;
    }

    $incoming = "";
    $X = (int) fgets(STDIN);
    for($i = 0; $i < $X; $i++)
    {
        $incoming = fgets(STDIN);
        $incoming .= " ";
        $N = number_recover_exclamation_count($incoming, $K);
        calculate_and_show($N, $K);
    }

?>