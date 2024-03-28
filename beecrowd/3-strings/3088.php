<?php
    $oddLetter = fgetc(STDIN);
    while(($evenLetter = fgetc(STDIN)) != null)
    {
        while ($oddLetter == ' ' && $evenLetter == ' ')
        {
            echo $oddLetter;
            $oddLetter = $evenLetter;
            $evenLetter = fgetc(STDIN);
        }

        if (!strpos("  ,", $oddLetter . $evenLetter) && !strpos("  .", $oddLetter . $evenLetter))
        {
            echo $oddLetter;
        }
        $oddLetter = $evenLetter;
    }
    echo $oddLetter;
?>