<?php
    $N = (int) fgets(STDIN);
    $message_map = [];
    for ($i = 0; $i < $N; $i++)
    {
        $language = trim(fgets(STDIN));
        $message = trim(fgets(STDIN));
        $message_map[$language] = $message;
    }
    $C = (int) fgets(STDIN);
    for ($j = 0; $j < $C; $j++)
    {
        $name = fgets(STDIN);
        $language = trim(fgets(STDIN));
        echo $name . $message_map[$language] . PHP_EOL . PHP_EOL;
    }
?>