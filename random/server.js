// Dependencies
const http = require('http');

//create a server:
const server = http.createServer((req, res) => {
  res.writeHead(200, {'Content-Type': 'text/html'});
  console.log('Write response')
  res.write('Hello NodeJS! This is a new local server <br/>') //write a response to the client
  res.write('Your url: ' + req.url);
  res.end() //end the response
  console.log('Response ended.')
});

// start listening to the server
server.listen(8080, () => {
  console.log('Node server is listening on 8080 port.')
});
