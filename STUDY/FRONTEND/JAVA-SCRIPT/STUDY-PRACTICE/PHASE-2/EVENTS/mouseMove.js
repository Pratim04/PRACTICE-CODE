
let Box = document.querySelector("#box");

// MouseMove : 

window.addEventListener("mousemove",function (dets) {
    console.log(dets.clientX ,dets.clientY);
    Box.style.top = dets.clientY + "Px";
    Box.style.left = dets.clientX + "Px";
});

// This 'dets' in the event funtion is the Event Object

