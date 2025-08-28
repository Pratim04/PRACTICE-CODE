let box = document.querySelector("#box");

box.addEventListener("mouseover",function () {
    box.style.backgroundColor = "yellow";
});

box.addEventListener("mouseout",function () {
    box.style.backgroundColor = "red";
});

