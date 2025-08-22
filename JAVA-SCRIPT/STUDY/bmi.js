function bmi(weight,height) {
    return weight / (height**2);
}

console.log(bmi(60,1.7).toFixed(2));

// toFixed(2) is for how many number needed after point '.' 