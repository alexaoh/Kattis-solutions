const readline = require('readline');
const readlineInterface = readline.createInterface(process.stdin, process.stdout);
 
function ask(){
    let res = 0;
    readlineInterface.question("", (guests) => {
        readlineInterface.question("", (line) => {
            let l = line.split(" ");
            res = l[0];
            for (let i = 1; i < l.length; i++){
                res = res ^ l[i]; //XOR
            }
            //readlineInterface.close();
        });
        //readlineInterface.close();
        return res;
    });
}


//Må bruke async/await promises? Skjønner ikke helt akkurat nå, test mer. 

readlineInterface.question("", (testCases) => {
    let l = [];
    for (let i = 0; i < parseInt(testCases, 10); i++){
        l.push(ask());
    }

    let i = 1;
    for (const val of l){
        console.log("Case #"+i+": "+val);
        i++;
    }
    //readlineInterface.close();
});
