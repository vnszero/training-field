<?php
    $weights = [2,3,5];
    $sum_weights = 0;
    for ($k=0; $k<count($weights); $k++)
    {
        $sum_weights += $weights[$k];
    }
    $N = fgets(STDIN);
    for ($i=0; $i<(int)$N; $i++)
    {
        $sum = 0;
        $inputs = explode(' ', trim(fgets(STDIN)));
        for ($j=0; $j<count($inputs); $j++)
        {
            $sum += $inputs[$j]*$weights[$j];
        }
        $sum /= $sum_weights;
        printf("%.1f\n", $sum);
    }
?>