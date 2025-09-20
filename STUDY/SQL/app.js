import mysql from "mysql2/promise";

//? 1: to connect to mysql server
const db = await mysql.createConnection({
    host: "localhost",
    user: "root",
    password: "MySQL2PRATIM2004",
    database: "mysql_db",
});
console.log("sql connected");

// //? 2: we need to create a db

// await db.execute(`create database mysql_db`);
// console.log(await db.execute("SHOW DATABASES"));

// //? 3: then we to create a table
// await db.execute (`
//         CREATE TABLE users (
//     id INT AUTO_INCREMENT PRIMARY KEY,
//     username VARCHAR(100) NOT NULL,
//     email VARCHAR(100) NOT NULL UNIQUE
//     );
// `);

//? 4: is to perform CRUD operation
//! INSERT => 
//! Using Inline Values (Not Recommended)

// await db.execute(`
//     insert into users 
//     (username, email) 
//     values 
//     ('pratim','prtim@gmail.com')
// `);

//! Using Prepared Statements (Recommended)
// await db.execute(`
//     insert into users (username, email) values (?,?)`, [
//         'Pratim',
//         'Pratim@gmail.com'
// ]);

//* For multiple datas
// const vlaues = [
//     ['Arjun', 'arjun01@gmail.com'],
//     ['Aarav', 'aarav123@gmail.com'],
//     ['Ishita', 'ishita.k@outlook.com'],
//     ['Rohan', 'rohan.dev@yahoo.com'],
//     ['Sneha', 'sneha.p@gmail.com']
// ];

// await db.query("insert into users(username, email) values ?",
// [vlaues]);

//! Read
const [rows] = await db.execute(`select * from users `);
// const [rows] = await db.execute(`select * from users where username = "pratim" `);
console.log(rows);

//! Update
//? Syntax
// Update table_name
// SET colum1 = value1, column2 = value2, ...
// WHERE conditons;

// recommended 
// try 
// {
//     const [rows] = await db.execute("update users set email = 'pratim04@gmail.com' where username = 'pratim' ");
//     console.log("All Users: ", rows);
// } 
// catch (error) 
// {
//     console.error(error);
// }

// FOR PROFESSiNAL
// try 
// {
//     const [rows] = await db.execute("update users set email = ? where username = ? ",["pratim","xay"]);
//     console.log("All Users: ", rows);
// } 
// catch (error) 
// {
//     console.error(error);
// }

//! Delete
//? Syntax
// DELETE FROM table_name
// WHERE conditons;

// try 
// {
//     const [rows] = await db.execute("DELETE FROM users where username = 'pratim' ");
//     console.log("All Users: ", rows);
// } 
// catch (error) 
// {
//     console.error(error);
// }