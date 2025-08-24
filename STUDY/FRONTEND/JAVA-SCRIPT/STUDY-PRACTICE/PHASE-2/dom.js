// // Text manupulation 
// let abc = document.querySelector("h1");
// abc.textContent = "pratim";
// console.log(abc);

// Attribute Manupulation
// First Method

// let att = document.querySelector("a");
// console.log(att);
// att.href = "https://www.youtube.com";

// Second Method

// let att = document.querySelector("a");
// console.log(att);
// att.setAttribute ("href","https://www.youtube.com");

// Image Set by js

// let img = document.querySelector("img");
// img.setAttribute("src","https://wallpapers.com/images/featured/vagabond-fbmotsb7hh7jipzw.webp")

// Dynamic DOM manipulation 
// We can add any tag into our html tag by the help of DOM.

// let head = document.createElement("h1");
// head.textContent = "DOM is nice";
// document.body.append(head);

// Ex 2

// let head = document.createElement("h1");
// head.textContent = "DOM is nice";
// document.querySelector("div").prepend(head);

// Style By DOM

// let head = document.querySelector("h1");
// head.style.color = "red";
// head.style.fontFamily = "Gilroy";
// head.style.textTransform = "Capitalize";

// document.body.style.background = "purple";

// Add class By DOM

// let head = document.querySelector("h1");
// head.classList.add("newClass"); // add new class
// head.classList.remove("newClass"); // remove class
// head.classList.toggle("newClass"); // if any remove if no added

// add data(li) in a ul

// let UL = document.querySelector("ul");
// let LI = document.createElement("li");

// LI.textContent = "New Task";
// UL.appendChild(LI);

