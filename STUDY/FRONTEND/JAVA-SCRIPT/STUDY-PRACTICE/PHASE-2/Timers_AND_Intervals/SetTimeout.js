// setTimeout :
// (function () {
//     console.log("setTimeout");
// },5000);

// setInterval :

let c = document.querySelector("h1");
let i = document.querySelector("input");
let count = 10;

i.addEventListener("click",function(){
    let t = setInterval(function() {
    if (count >= 0) {
        c.textContent = count;
        count--;
    } else {
        clearInterval(t);
        c.textContent = "BOOM!";
    }
},1000);
});

