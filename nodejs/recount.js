const readline = require("readline");

const r1 = readline.createInterface({
  input: process.stdin,
  output: process.stdout,
});

function takeInput() {
  return new Promise(resolve => r1.question("", answ => resolve(answ)));
}


async function main() {
    let person = "";
    let people = new Map();
    while (person != "***"){
        person = await takeInput();

        if (person == "***"){
            break;
        }

        if (people.has(person)) {
            people.set(person, people.get(person) + 1);
        } else {
            people.set(person, 1);
        }
    }
    r1.close();

    let max = [...people.entries()].reduce(reducer);
    if (!max){
        console.log("Runoff!");
    } else{
        console.log(max[0]);
    }
}

main();

function reducer(a, b){
    if (b[1] > a[1]){
        return e;
    } else if (b[1] == a[1]){
        return 0;
    } else{
        return a;
    }
}
