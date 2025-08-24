let A = document.querySelector("h1");

A.addEventListener("dblclick", function(){
    A.innerHTML = "<i>Ahh! You Clicked</i>";
    A.style.color = "red";
});