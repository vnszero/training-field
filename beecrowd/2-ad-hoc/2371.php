<?php
    /* part 0 - basics */

    // constants
    const SHARP = -11;
    const DOLLAR = -1;

    // globals
    $field = [];
    $ships_size = [];

    //reference
    $ship_number = 1;
    
    /* part 1 - read matrix */
    [$N, $M] = explode(' ', fgets(STDIN));
    
    // first row of 0s
    $field[] = [];
    for ($column = 0; $column <= $M + 1; $column++)
    {
        $field[0][$column] = 0;
    }

    for ($row = 1; $row <= $N; $row++)
    {
        $field[$row] = [];

        // first column 0 for all rows
        $field[$row][0] = 0;
        
        for ($column = 1; $column <= $M; $column++)
        {
            $field[$row][$column] = ord(fgetc(STDIN)) - 46;
        }

        // last column 0 for all rows
        $field[$row][$M+1] = 0;

        // drop \n
        fgetc(STDIN);
    }

    // last row of 0s
    $field[$N+1] = [];
    for ($column = 0; $column <= $M + 1; $column++)
    {
        $field[$N+1][$column] = 0;
    }

    /* part 2 - numerate ships */
    function shipFinder($row, $column, $ship_number)
    {
        global $field;
        global $ships_size;

        if($field[$row][$column + 1] == SHARP)
        {
            $field[$row][$column] = DOLLAR;
            $ships_size[$ship_number]++;
            shipFinder($row, $column + 1, $ship_number);
        }
        if($field[$row + 1][$column] == SHARP)
        {
            $field[$row][$column] = DOLLAR;
            $ships_size[$ship_number]++;
            shipFinder($row + 1, $column, $ship_number);
        }
        if($field[$row][$column - 1] == SHARP)
        {
            $field[$row][$column] = DOLLAR;
            $ships_size[$ship_number]++;
            shipFinder($row, $column - 1, $ship_number);
        }
        if($field[$row - 1][$column] == SHARP)
        {
            $field[$row][$column] = DOLLAR;
            $ships_size[$ship_number]++;
            shipFinder($row - 1, $column, $ship_number);
        }
        $field[$row][$column] = $ship_number;
    }

    for ($row=1; $row<=$N; $row++)
    {
        for ($column=1; $column<=$M; $column++)
        {
            if($field[$row][$column] == SHARP)
            {
                $field[$row][$column] = DOLLAR;
                $ships_size[$ship_number] = 1;
                shipFinder($row, $column, $ship_number);
                $ship_number++;
            }
        }
    }

    /* part 3 - read shots and sink ships */
    $K = fgets(STDIN);
    for ($guess = 1; $guess <= $K; $guess++)
    {
        [$L, $C] = explode(' ', fgets(STDIN));
        if($field[(int)$L][(int)$C])
        {
            $ships_size[$field[(int)$L][(int)$C]]--;
        }
    }

    /* part 4 - who still alive? */
    $sunk_ship = 0;
    for ($i = 1; $i < $ship_number; $i++)
    {
        if ($ships_size[$i] == 0)
        {
            $sunk_ship++;
        }
    }
    echo $sunk_ship, PHP_EOL;
?>