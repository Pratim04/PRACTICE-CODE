function discount(dis) {
    return function name(price) {
        return price - price * (dis/100);
    }
}

let dicounter = discount(10);
console.log(dicounter(200));  