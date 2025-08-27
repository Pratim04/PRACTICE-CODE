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

// File button Click by JS

let button = document.querySelector("#btn");
let FileINP = document.querySelector("#FileInp");

button.addEventListener("click",function (e) {
    FileINP.click();
});

FileINP.addEventListener("change",function (e) {
const namefile = e.target.files[0];
    if (namefile) {
        button.textContent = namefile.name;
    }
});

// submit 

let F = document.querySelector("#SUBFORM");
let inp = document.querySelectorAll(".Sbm");
let main = document.querySelector("#main");
F.addEventListener("submit",function (e) {
    e.preventDefault();

    console.log (
        inp[0].value,
        inp[1].value,
        inp[2].value,
        inp[3].value,
    );

    let card = document.createElement("div");
    card.classList.add("card");

    let profile = document.createElement("div");
    profile.classList.add("profile");

    card.appendChild(profile);
    console.log(card);

    let img = document.createElement("img");
    img.setAttribute("src",inp[0].value);
        let h3 = document.createElement("h3");
        h3.textContent = inp[1].value;
        let h5 = document.createElement("h5");
        h5.textContent = inp[2].value;
        let p = document.createElement("p");
        p.textContent = inp[3].value;

        profile.appendChild(img);
        card.appendChild(profile);

        card.appendChild(h3);
        card.appendChild(h5);
        card.appendChild(p);

        main.appendChild(card);

        inp.forEach(function (p) {
            if (p.type !== "submit") {
                p.value = "";    
            }
        });
});



