let a =document.querySelector("#d1");
let b =document.querySelector("#d2");
let c =document.querySelector("#d3");
let btn =document.querySelector("#b1");

btn.addEventListener("click",function () {
    console.log("button clicked");
});

c.addEventListener("click",function () {
    console.log("A clicked");
},true
);

b.addEventListener("click",function () {
    console.log("B clicked");
});

a.addEventListener("click",function () {
    console.log("C clicked");
});
