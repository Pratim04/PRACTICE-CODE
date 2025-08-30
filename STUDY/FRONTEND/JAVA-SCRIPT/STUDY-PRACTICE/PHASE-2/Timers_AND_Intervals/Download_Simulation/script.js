let count = 0;
let second = 20;
let per = document.querySelector(".percentage");
let prog = document.querySelector(".progress-fill");
let Dbtn = document.querySelector(".download-btn");

Dbtn.addEventListener("click", function () {
    setInterval(function () {
    if (count <= 99) {
        count++;
        prog.style.width = `${count}%`;
        per.textContent = `${count}%`;
    }
    if (count === 100) {
        per.textContent = "Download Completed";
    }
  }, (second * 1000) / 100);
});
