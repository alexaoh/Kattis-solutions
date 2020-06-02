const readline = require('readline');
const readlineInterface = readline.createInterface(process.stdin, process.stdout);

function input(){
    return new Promise((resolve, reject) => {
        readlineInterface.question("", resolve);
    });
}
 
async function oddManOut(){
    let testCases = await input(); 
    let results = [];
    for (let i = 0; i < testCases; i++){
        let guests = await input();
        let intString = await input();
        const intList = intString.split(" ");
        let res = intList[0];
        let copyIntList = [...intList]; //Make copy of listInt.
        let j = 1;
        while(copyIntList.length > 1){
            if (res === copyIntList[j]){
                copyIntList.splice(j, 1);
                copyIntList.splice(0, 1);
                res = copyIntList[0];
                j = 0;
            }
            if (j === copyIntList.length){
                break;
            }
            j++;
        }
        results.push(res);
    }

    let i = 1;
    for (const val of results){
        console.log("Case #"+i+": "+val);
        i++;
    }    
    process.exit();
}

oddManOut();
