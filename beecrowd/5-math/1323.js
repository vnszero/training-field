/* in becrowd you must use this: */
// var input = require('fs').readFileSync('/dev/stdin', 'utf8');
// var lines = input.split('\n');

function main(lines)
{
    let i = 0
    while(true)
    {
        if(lines[i] == 0)
        {
            break
        }
        const n = lines[i]
        let sum = 1
        for (let j = 2; j <= n; j++)
        {
            sum += Math.pow(j,2);
        }
        console.log(`${sum}`)
        i++
    }
}

process.stdin.on('data', data => { 
    lines = String(data).split('\n')

    main(lines)

    /* you dont need this in beecrowd */
    process.exit(); 
});

