
let Box = document.querySelector("#box");

window.addEventListener("mousemove",function (dets) {
    console.log(dets.clientX ,dets.clientY);
    Box.style.top = dets.clientY + "Px";
    Box.style.left = dets.clientX + "Px";
});
