const readline = require('readline');
const readlineInterface = readline.createInterface(process.stdin, process.stdout);

readlineInterface.question("", (sentence) => {
    let s = new Set();
    let strArray = sentence.toString().split(" ");

    strArray.forEach(element => {
        s.add(element);
    }); 

    if (strArray.length === s.size){
        console.log("yes");
    } 
    else{
        console.log("no");
    }
    readlineInterface.close();

});
