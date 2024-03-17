<?php
    $state_bold = false;
    $state_italic = false;
    while (($line = fgets(STDIN)) !== false) {
        

        $len = strlen($line);
        for ($i = 0; $i < $len; $i++)
        {
            $char = $line[$i];
            if ($char == '_')
            {
                if ($state_italic)
                {
                    echo "</i>";
                    $state_italic = false;
                }
                else
                {
                    echo "<i>";
                    $state_italic = true;
                }
            }
            elseif ($char == '*')
            {
                if ($state_bold)
                {
                    echo "</b>";
                    $state_bold = false;
                }
                else{
                    echo "<b>";
                    $state_bold = true;
                }
            }
            else
            {
                echo $char;
            }
        }
    }
?>