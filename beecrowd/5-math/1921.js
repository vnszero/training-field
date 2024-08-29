/* in becrowd you must use this: */
// var input = require('fs').readFileSync('/dev/stdin', 'utf8');
// var lines = input.split('\n');

function main(lines)
{
    const N = lines[0]

    /* math definition */
    // n*(n-3) = number of diagonals
    const wires = N*(N-3)/2
    
    console.log(`${wires}`)
}

process.stdin.on('data', data => { 
    lines = String(data).split('\n')

    main(lines)

    /* you dont need this in beecrowd */
    process.exit(); 
});

