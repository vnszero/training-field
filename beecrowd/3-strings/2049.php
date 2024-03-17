<?php
    $counter = 1;
    $output = "";
    do{
        $sign = trim(fgets(STDIN));
        if ($sign == '0')
        {
            if ($output != "")
            {
                echo $output;
            }
            break;
        }
        else
        {
            if ($output != "")
            {
                echo $output . PHP_EOL;
            }
        }
        $text = trim(fgets(STDIN));
        echo "Instancia $counter" . PHP_EOL;
        if (strpos(' '.$text, $sign))
        {
            $output = "verdadeira" . PHP_EOL;
        }
        else
        {
            $output = "falsa" . PHP_EOL;
        }
        $counter++;
    } while (true);
?>