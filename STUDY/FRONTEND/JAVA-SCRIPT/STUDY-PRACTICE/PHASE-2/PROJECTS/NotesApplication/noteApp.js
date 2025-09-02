let addNote = document.querySelector("#add-note");
let wrapper = document.querySelector(".center-wrapper");
let CloseBtn = document.querySelector(".close-btn");
let container = document.querySelector(".container");

let stack = document.querySelector(".stack");
let upbtn = document.querySelector("#moveUp");
let donwbtn = document.querySelector("#moveDown");

// Input fields
const imgUrlInput = document.querySelector("#imgUrl");
const fullNameInput = document.querySelector("#fullName");
const homeTownInput = document.querySelector("#homeTown");
const purposeInput = document.querySelector("#purpose");

// Category checkboxes
const form = document.querySelector("form");

// Buttons
const createBtn = document.querySelector(".create-btn");
const closeBtn = document.querySelector(".close-btn");

// STARTS FROM HERE :

function saveToLocalstorage(obj) {

    if (localStorage.getItem("task") === null) {
        let oldTask = [];
        oldTask.push(obj)
        localStorage.setItem("task",JSON.stringify(oldTask));
    } else {    
        let oldTask = localStorage.getItem("task");
        oldTask = JSON.parse(oldTask);
        oldTask.push(obj);
        localStorage.setItem("task",JSON.stringify(oldTask));
    }
};

// open the popUp
addNote.addEventListener("click", function () {
  wrapper.style.display = "flex"; // show popup
});

// Close the popUp
CloseBtn.addEventListener("click", function () {
  wrapper.style.display = "none"; // show popup
});

form.addEventListener("submit",function (evt) {
    console.log("hu");
    evt.preventDefault();

    const categoryRadios = document.querySelectorAll(".categories input[type='radio']");
    const imaGe = imgUrlInput.value.trim(); 
    const purPose = purposeInput.value.trim(); 
    const HomeTown = homeTownInput.value.trim(); 
    const FullName = fullNameInput.value.trim();

    // Validation

    let selected = false;
    categoryRadios.forEach(function (cat) {
        if (cat.checked) {
            selected = cat.value;
        }
    });

    if (imaGe === "" || FullName === "" || HomeTown === "" || purPose === "") {
        alert("⚠️ Please fill in all input fields.");
        return;
    }

    if (!selected) {
        alert("Please select a category!");
        return;
    }

    saveToLocalstorage({
        imaGe,
        purPose,
        HomeTown,
        FullName,
        selected,
    });
    // If everything is valid
    // return true;
    form.reset();
    wrapper.style.display ="none";
    createCard();
});

// CARD :
function createCard() {
    const stack = document.querySelector(".stack");
    stack.innerHTML = ""; // clear old cards

    let allTasks = JSON.parse(localStorage.getItem("task")) || [];

    // Take only last 3
    let lastThree = allTasks.slice(-3);

    lastThree.forEach(function (t, index) {
        // === Create the card ===
        const card = document.createElement("div");
        card.classList.add("card");

        // Add stacking position (for CSS)
        card.style.zIndex = index; 
        card.style.transform = `translateY(${index * 20}px)`; // 20px gap

        // Profile
        const profile = document.createElement("div");
        profile.classList.add("profile");

        const img = document.createElement("img");
        img.src = t.imaGe;
        img.alt = "Profile Picture";

        const h3 = document.createElement("h3");
        h3.textContent = t.FullName;

        profile.appendChild(img);
        profile.appendChild(h3);

        // Home town
        const details1 = document.createElement("div");
        details1.classList.add("details");

        const span1a = document.createElement("span");
        span1a.textContent = "Home town";

        const span1b = document.createElement("span");
        span1b.textContent = t.HomeTown;

        details1.appendChild(span1a);
        details1.appendChild(span1b);

        // Purpose
        const details2 = document.createElement("div");
        details2.classList.add("details");

        const span2a = document.createElement("span");
        span2a.textContent = "Purpose";

        const span2b = document.createElement("span");
        span2b.textContent = t.purPose;

        details2.appendChild(span2a);
        details2.appendChild(span2b);

        // Actions
        const actions = document.createElement("div");
        actions.classList.add("actions");

        const callBtn = document.createElement("button");
        callBtn.classList.add("call");
        callBtn.textContent = "📞 Call";

        const msgBtn = document.createElement("button");
        msgBtn.classList.add("message");
        msgBtn.textContent = "Message";

        actions.appendChild(callBtn);
        actions.appendChild(msgBtn);

        // Assemble
        card.appendChild(profile);
        card.appendChild(details1);
        card.appendChild(details2);
        card.appendChild(actions);

        stack.appendChild(card);
    });
}
createCard();

// UPDATE :
function updatestack() {
    const cards = document.querySelectorAll(".stack .card");

    for (let i = 0; i < 3; i++) {
        card.style.zIndex = 3 - i;
        card.style.transform = `translateY(${i*10}px) scale(${1-i*0.02})`;
        card.style.opacity = `${1-i * 0.02}`;
    }
};

// UP DOWN 

upbtn.addEventListener("click",function () {
    let lastChild = stack.lastElementChild;
    if (lastChild) {
        stack.insertBefore(lastChild,stack.firstElementChild);
        updatestack();
        console.log("hh");
    }
});

donwbtn.addEventListener("click",function () {
    const firstChild = stack.firstElementChild;
    if (firstChild) {
        stack.appendChild(firstChild);
        updatestack();
        console.log("hh");
    }
});









