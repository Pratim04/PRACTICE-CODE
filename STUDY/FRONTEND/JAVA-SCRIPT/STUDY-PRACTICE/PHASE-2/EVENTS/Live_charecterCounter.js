let PIP = document.querySelector("#IP");
let span = document.querySelector("span");

PIP.addEventListener("input",function () {
    let left = 20 - PIP.value.length;
    span.textContent = left;
    if (left < 0) {
        span.style.color = "red";
    } else {
        span.style.color = "white";
    }
});