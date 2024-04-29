// var input = require('fs').readFileSync('/dev/stdin', 'utf-8');
// var lines = input.split('\n');

function main(lines)
{
    let word = String(lines[0]);

    if(word.length >= 10)
    {
        console.log('palavrao');
    }
    else
    {
        console.log('palavrinha');
    }
}

process.stdin.on('data', data => {
    lines = String(data).split('\n')

    main(lines)

    process.exit();
})