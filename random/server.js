// Dependencies
const http = require('http');

//create a server:
const server = http.createServer((req, res) => {
  console.log('Write response')
  res.write('Hello NodeJS! This is a new local server') //write a response to the client
  res.end() //end the response
  console.log('Response ended.')
});

// start listening to the server
server.listen(8080, () => {
  console.log('Node server is listening on 8080 port.')
});

