// Text Event
let A = document.querySelector("h1");

A.addEventListener("click", function () {
    A.innerHTML = "<i>Ahh! You Clicked</i>";
    A.style.color = "red";
});

// Input Event
let ip = document.querySelector(".a");

ip.addEventListener("input",function(e){
    if (e.data !== null) {
        console.log(e.data);
    }
});

// Change Event
let sel = document.querySelector(".EL");

sel.addEventListener("change",function (dets) {
    console.log(dets.target.value);
});