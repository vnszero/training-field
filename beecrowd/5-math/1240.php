<?php
    $N = (int) fgets(STDIN);
    $state = true;
    $size_A = 0;
    $size_B = 0;
    $A = '';
    $B = '';
    for ($i = 0; $i < $N; $i++)
    {
        do {
            $ch = fgetc(STDIN);
            if($ch == PHP_EOL || $ch == null)
            {
                $state = !$state;
                break;
            }
            elseif($ch == " ")
            {
                $state *= !$state;
            }
            else
            {
                if ($state)
                {
                    $A .= $ch;
                    $size_A++;
                }
                else
                {
                    $B .= $ch;
                    $size_B++;
                }
            }
        } while(true);
        
        $fit = true;
        if ($size_B > $size_A)
        {
            $fit =  false;
        }
        else
        {
            $index_A = $size_A - 1;
            for ($index_B = $size_B - 1; $index_B >= 0; $index_B--)
            {
                if($A[$index_A] != $B[$index_B])
                {
                    $fit = false;
                    break;
                }
                $index_A--;
            }
        }

        if ($fit)
        {
            echo 'encaixa' . PHP_EOL;
        }
        else
        {
            echo 'nao encaixa' . PHP_EOL;
        }

        $A = '';
        $B = '';
        $size_A = 0;
        $size_B = 0;
    }
?>