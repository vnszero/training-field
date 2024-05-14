<?php
    $N = (int) fgets(STDIN);
    for ($i = 0; $i < $N; $i++)
    {
        $input = fgets(STDIN);
        $diamond = 0;
        $left = 0;
        $right = 0;
        for ($j = 0; ; $j++)
        {
            if (isset($input[$j]))
            {
                if ($input[$j] == '<')
                {
                    $left++;
                }
                elseif ($input[$j] == '>')
                {
                    if ($left > $right)
                    {
                        $right++;
                    }
                }
            }
            else
            {
                break;
            }
        }
        if ($right >= $left)
        {
            echo $left . PHP_EOL;
        }
        else
        {
            echo $right . PHP_EOL;
        }
    }
?>