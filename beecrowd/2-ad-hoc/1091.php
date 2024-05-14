<?php
    $queries = (int) fgets(STDIN);
    do {
        $division_point = explode(' ', fgets(STDIN));
        $division_point[0] = (int) $division_point[0];
        $division_point[1] = (int) $division_point[1];
        for ($i = 0; $i < $queries; $i++)
        {
            $current_point = explode(' ', fgets(STDIN));
            $current_point[0] = (int) $current_point[0];
            $current_point[1] = (int) $current_point[1];
            if ($current_point[0] == $division_point[0] || 
                $current_point[1] == $division_point[1])
            {
                echo 'divisa' . PHP_EOL;
            }
            elseif ($current_point[0] > $division_point[0] && 
                $current_point[1] > $division_point[1])
            {
                echo 'NE' . PHP_EOL;
            }
            elseif ($current_point[0] < $division_point[0] && 
                $current_point[1] > $division_point[1])
            {
                echo 'NO' . PHP_EOL;
            }
            elseif ($current_point[0] < $division_point[0] && 
                $current_point[1] < $division_point[1])
            {
                echo 'SO' . PHP_EOL;
            }
            else
            // elseif ($current_point[0] > $division_point[0] && 
            //     $current_point[1] < $division_point[1])
            {
                echo 'SE' . PHP_EOL;
            }
        }

        $queries = (int) fgets(STDIN);
    } while ($queries != 0);
?>