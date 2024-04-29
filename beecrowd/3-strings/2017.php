<?php
    $original_word = trim(fgets(STDIN));
    $original_word .= ' ';
    $max_k = (int) fgets(STDIN);
    $cost = 101;
    $cost_index = -1;

    for ($current_word_index = 1; $current_word_index <= 5; $current_word_index++)
    {
        $next_word = trim(fgets(STDIN));
        $next_word .= ' ';
        $next_word_cost = 0;
        $l = 0;
        for ($j = 0; $original_word[$j] != ' ' and $next_word[$l] != ' ';)
        {
            if ($original_word[$j] != $next_word[$l])
            {
                $next_word_cost++;
            }

            if ($original_word[$j] != ' ')
            {
                $j++;
            }
            if ($next_word != ' ')
            {
                $l++;
            }
        }

        if ($next_word_cost < $cost)
        {
            $cost = $next_word_cost;
            $cost_index = $current_word_index;
        }
    }

    if ($cost > $max_k)
    {
        echo -1 . PHP_EOL;
    }
    else{
        echo $cost_index . PHP_EOL . $cost . PHP_EOL;
    }
?>