<?php
    while (($incoming = fgets(STDIN)) !== false && trim($incoming) != '*')
    {
        $start_letter = strtolower($incoming[0]);
        $condition = true;
        $length = strlen($incoming);

        for ($i = 1; $i < $length; $i++)
        {
            $char = $incoming[$i];

            if ($char == ' ')
            {
                if (strtolower($incoming[$i + 1]) != $start_letter)
                {
                    $condition = false;
                    break;
                }
            }
        }

        echo $condition ? 'Y' : 'N';
        echo PHP_EOL;
    }
?>
