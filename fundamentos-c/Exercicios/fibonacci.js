let lines = require("fs").readFileSync(0).toString().split("\n");
let input = () => lines.shift();

let limit = Number(input());
let seqFib = [];
let aux = 0;

seqFib[0] = 0;
seqFib[1] = 1;

for (let i = 2; i < limit; i++) {
    seqFib[i] = seqFib[i - 2] + seqFib[i - 1];
    if (seqFib[i] % 2 === 0)
        aux += seqFib[i];
}
console.log(aux);