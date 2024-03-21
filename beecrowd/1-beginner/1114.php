<?php
    $right = "2002";
    do
    {
        $input = fgets(STDIN);
        $result = strpos(' ' . $input, $right) ? "Acesso Permitido" : "Senha Invalida";
        echo $result . PHP_EOL;
        if (strpos(" Acesso Permitido", $result))
            break;
    } while(true);
?>