const express = require('express');
const morgan = require('morgan');
const app = express();
const dbConnection = require('./config/db');
const userModel = require('./models/user');


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


app.get('/register',(req,res) => {
    res.render('register');
});

app.post('/register', async (req,res)=>{
    
    const { username, email, password } = req.body
    
    const newUser = await userModel.create({
        username:username,
        email:email,
        password:password
    });
    
    res.send(newUser);
    
});

app.post('/get-form-data',(req,res)=>{
    console.log(req.body);
    res.send('data received');
});

// find() : 
app.get('/getUsers',(req,res) => {
    userModel.find().then((user)=>{
        res.send(user);
    })
});

// Update() :
app.get('/update-User',async (req,res)=>{
    await userModel.findOneAndUpdate({
        username: 'v'
    }, {
        email:"Vinod@gmail.com"
    });

    res.send('User Updated');
});

// Delete() :
app.get('/deleteUser',async (req,res) => {
    await userModel.findOneAndDelete({
        username: "v"
    });

    res.send('User Deleted');
});

app.listen(5000,console.log('Server Running'));