<?php
    function findHolding(&$collection, $bank) {
        if (!isset($collection[$bank])) {
            return null;
        }
        while ($collection[$bank] != $bank) {
            $bank = $collection[$bank];
        }
        return $bank;
    }
    
    function fusion(&$collection, $bankA, $bankB) {
        $holdingA = findHolding($collection, $bankA);
        $holdingB = findHolding($collection, $bankB);
        if ($holdingA !== null && $holdingB !== null) {
            $collection[$holdingB] = $holdingA;
        } elseif ($holdingA !== null) {
            $collection[$bankB] = $collection[$holdingA];
        } elseif ($holdingB !== null) {
            $collection[$bankA] = $collection[$holdingB];
        } else {
            $collection[$bankA] = $bankA;
            $collection[$bankB] = $bankA;
        }
    }
    
    $input = explode(' ', fgets(STDIN));
    $N = (int) $input[0];
    $b = (int) $input[1];
    $collection = [];
    
    for ($i = 0; $i < $b; $i++) {
        $input = explode(' ', fgets(STDIN));
        $operation = $input[0];
        $bankA = (int) $input[1];
        $bankB = (int) $input[2];
        switch ($operation) {
            case 'C':
                echo ((findHolding($collection, $bankA) !== null && findHolding($collection, $bankB) !== null && findHolding($collection, $bankA) == findHolding($collection, $bankB)) ? 'S' : 'N') . PHP_EOL;
                break;
            default:
                if ($bankA < $bankB) {
                    fusion($collection, $bankA, $bankB);
                } else {
                    fusion($collection, $bankB, $bankA);
                }
        }
    }
?>