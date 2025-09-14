const http = require('http');

const server = http.createServer((req,res)=> {
    // console.log(req.url);
    if (req.url == '/') { res.end('Home Page'); }
    if (req.url == '/about') { res.end('about Page'); }
    if (req.url == '/contact') { res.end('contact Page'); } 
});

server.listen(3000,console.log('Lisitng'));