<?php
    $N = (int) fgets(STDIN);
    for ($i = 0; $i < $N; $i++)
    {
        [$x, $y] = explode(' ', fgets(STDIN));
        try
        {
            $result = $x/$y;
            echo number_format($result, 1, '.', ',') . PHP_EOL;
        } 
        catch(DivisionByZeroError $e)
        {
            echo "divisao impossivel" . PHP_EOL;
        }
    }
?>