// SESSION STORAGE
// can't remove data without changing it manually

// To store and update use setItem :
sessionStorage.setItem("name","pratim");

// To Fetch use getTtem :
let val = sessionStorage.getItem("name");

// To remove use removeItem :
sessionStorage.removeItem("name");

// To Clear
sessionStorage.clear();