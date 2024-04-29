/* in becrowd you must use this: */
// var input = require('fs').readFileSync('/dev/stdin', 'utf8');
// var lines = input.split('\n');

function main(lines)
{
    const values = lines[0].split(' ')
    const H = values[0]
    const P = values[1]

    const S = H/P

    console.log(`${S.toFixed(2)}`)
}

process.stdin.on('data', data => { 
    lines = String(data).split('\n')

    main(lines)

    /* you dont need this in beecrowd */
    process.exit(); 
});

