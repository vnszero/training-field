<?php
    function explore($x, $y, $matrix, $N, &$flags, &$count_flags)
    {
        for ($k=(pi()/2); $k>=-(pi()); $k -= (pi()/2))
        { // clockwise direction
            $next_x = $x + round(cos($k));
            $next_y = $y + round(sin($k));
            if ($next_x >= 0 and $next_x < $N and $next_y >= 0 and $next_y < $N)
            { // valid next position
                if($matrix[$x][$y] <= $matrix[$next_x][$next_y] and $flags[$next_x][$next_y] != 1)
                { // explore condition
                    $flags[$next_x][$next_y] = 1;
                    $count_flags++;
                    explore($next_x, $next_y, $matrix, $N, $flags, $count_flags);
                }
            }
        }
    }

    $N = (int) fgets(STDIN);
    $ball = explode(' ', fgets(STDIN));
    $ball_x = $ball[0] - 1; // to return to 0 as reference
    $ball_y = $ball[1] - 1;
    $matrix = array();
    $flags = array();
    for($i=0; $i<$N; $i++)
    {
        $row = explode(' ', str_replace("\n", " ", fgets(STDIN)));
        $matrix[$i] = $row;
        for($j=0; $j<count($row); $j++)
        {
            $flags[$i][$j] = 0;
        }
    }

    // start condition
    $flags[$ball_x][$ball_y] = 1;
    $count_flags = 1;

    for ($k=(pi()/2); $k>=-(pi()); $k -= (pi()/2))
    { // clockwise direction
        $next_x = $ball_x + round(cos($k));
        $next_y = $ball_y + round(sin($k));
        if ($next_x >= 0 and $next_x < $N and $next_y >= 0 and $next_y < $N)
        { // valid next position
            if($matrix[$ball_x][$ball_y] <= $matrix[$next_x][$next_y] and $flags[$next_x][$next_y] != 1)
            { // explore condition
                $flags[$next_x][$next_y] = 1;
                $count_flags++;
                explore($next_x, $next_y, $matrix, $N, $flags, $count_flags);
            }
        }
    }

    echo $count_flags . PHP_EOL;
?>