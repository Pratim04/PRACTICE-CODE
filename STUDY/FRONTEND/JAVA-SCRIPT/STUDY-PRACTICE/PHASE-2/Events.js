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
let device = document.querySelector("#headDevice");

sel.addEventListener("change",function (dets) {
    device.textContent = `${dets.target.value} Device Selected`;
});

// Task : We'll set a event on window so when we type on window that will change accordingly

let n = document.querySelector("#CH");

window.addEventListener("keydown",function (po) {
    // console.dir(po);
    if (po.key === " ") {
        n.textContent = "SpaceBar";
    }
    else {
        n.textContent = po.key;
    }
});

