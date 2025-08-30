let EmailInp = document.querySelector("#email");
let passwordInp = document.querySelector("#password");
let form = document.querySelector("form");

form.addEventListener("submit",function (dets) {
    dets.preventDefault();

    document.querySelector("#emailError").textContent = "";
    document.querySelector("#passError").textContent = "";

    const emailRegex = /^[^\s@]+@[^\s@]+\.[^\s@]+$/;
    const passwordRegex = /^(?=.*[a-z])(?=.*[A-Z])(?=.*\d)[a-zA-Z\d@$!%*?&]{8,}$/;
    
    let isValid = true;

    let emailAns = emailRegex.test(EmailInp.value);
    let passwordAns = passwordRegex.test(passwordInp.value);

    if(!emailAns) {
        document.querySelector("#emailError").textContent = "Email is invalid";
        isValid = false;
    }
    
    if(!passwordAns) {
        document.querySelector("#passError").textContent = "Password is invalid";
        isValid = false;
    }

    if (isValid) {
        document.querySelector("#resultMessage").textContent = "Everything is OK!"
    } 
    else {
        document.querySelector("#resultMessage").textContent = ""
    }
});
