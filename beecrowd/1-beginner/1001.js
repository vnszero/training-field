/* in becrowd you must use this: */
// var input = require('fs').readFileSync('/dev/stdin', 'utf8');
// var lines = input.split('\n');

function main(lines)
{
    const A = Number(lines[0])
    const B = Number(lines[1])

    const X = A + B

    console.log(`X = ${X}`)
}

process.stdin.on('data', data => { 
    lines = String(data).split('\n')

    main(lines)

    /* you dont need this in beecrowd */
    process.exit(); 
});

