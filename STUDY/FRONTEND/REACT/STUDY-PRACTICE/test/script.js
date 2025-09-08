let root = document.createElement("div");
let h1 = document.createElement("h1");
let body = document.querySelector("body");

body.appendChild(root);
root.appendChild(h1);

root.classList.add("root");
h1.classList.add("Heading");

h1.innerHTML = "HELLO";
