<?php
    $games_result = ['inter' => 0, 'gremio' => 0, 'tie' => 0];
    do {
        [$gols_inter, $gols_gremio] = explode(' ', fgets(STDIN));
        if ($gols_inter == $gols_gremio)
        {
            $games_result['tie']++;
        }
        elseif ($gols_inter > $gols_gremio)
        {
            $games_result['inter']++;
        }
        else
        {
            $games_result['gremio']++;
        }
        echo "Novo grenal (1-sim 2-nao)" . PHP_EOL;
        $input = (int) fgets(STDIN);
    } while($input != 2);
    $games = 0;
    foreach($games_result as $value)
    {
        $games += $value;
    }
    echo $games . " grenais" . PHP_EOL;
    
    echo "Inter:" . $games_result['inter'] . PHP_EOL;
    echo "Gremio:" . $games_result['gremio'] . PHP_EOL;
    echo "Empates:" . $games_result['tie'] . PHP_EOL;

    if ($games_result['inter'] > $games_result['gremio'])
    {
        echo "Inter venceu mais" . PHP_EOL;
    }
    elseif ($games_result['inter'] < $games_result['gremio'])
    {
        echo "Gremio venceu mais" . PHP_EOL;
    }
    else
    {
        echo "Nao houve vencedor" . PHP_EOL;
    }    
?>