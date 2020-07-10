const readline = require('readline');
const readlineInterface = readline.createInterface(process.stdin, process.stdout);

function ask(questionText) {
    return new Promise((resolve, reject) => {
      readlineInterface.question(questionText, resolve);
    });
}

start();

async function start() {
    let numbers = await ask("");
    let nums = numbers.split(" ");

    let list = nums[0].split("");
    let list2 = nums[1].split("");

    let reversedList = list.reverse();
    let reversedList2 = list2.reverse();

    let joinedReversedList = reversedList.join("");
    let joinedReversedList2 = reversedList2.join("");

    let integer = parseInt(joinedReversedList, 10);
    let integer2 = parseInt(joinedReversedList2, 10);

    console.log(integer > integer2 ? integer : integer2);
    process.exit();
}
