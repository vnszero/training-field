/* in beecrowd you must use this: */
// var input = require('fs').readFileSync('/dev/stdin', 'utf-8');
// var lines = input.split('\n');

function main(lines)
{
    const N = lines[0];

    for (let i = 0; i < N - 1; i++)
    {
        process.stdout.write("Ho ");
    }
    console.log("Ho!");
}

process.stdin.on('data', data => {
    lines = String(data).split('\n');
    
    main(lines);

    process.exit();
});