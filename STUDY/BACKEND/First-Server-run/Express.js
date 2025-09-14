const express = require('express');
const app = express();
const morgan = require('morgan');

app.use(morgan('dev'));

app.use(express.json());
app.use(express.urlencoded({extended:true}));
app.use(express.static("public"));


app.set('view engine','ejs');

app.use((req,res,next)=>{
    console.log("This is Middleware");
    const a = 5 , b = 4;
    console.log(a + b);
    return next();
});

app.get('/',(req,res) =>{
    res.render('index');
});

app.get('/about',(req,res) =>{
    res.send('New About Page');
});

app.get('/profile',(req,res) =>{
    res.send('New Profile Page');
});

app.post('/get-form-data',(req,res)=>{
    console.log(req.body)
    res.send('data received');
});
app.listen(5000);