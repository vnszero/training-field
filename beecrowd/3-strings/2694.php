<?php
    $N = (int) fgets(STDIN);
    for ($i = 0; $i < $N; $i++)
    {
        $input = fgets(STDIN);
        $num_form = "";
        $nums = [];
        for ($j = 0; $j < strlen($input); $j++)
        {
            $letter = $input[$j];
            if ($letter >= '0' && $letter <= '9')
            {
                
                $num_form .= $letter;
            }
            else
            {
                if (!empty($num_form))
                {
                    $nums[] = (int) $num_form;
                    $num_form = "";
                }
            }
        }
        if (!empty($num_form))
        {
            $nums[] = (int) $num_form;
            $num_form = "";
        }
        $sum = 0;
        foreach($nums as $num) 
        {
            $sum += $num;
        }
        echo $sum . PHP_EOL;
    }
?>