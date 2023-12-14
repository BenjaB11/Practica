const numbers = [10, 35, 55, 70, 100, 20, 30, 50];

const foundNumbers = numbers.findLast(x => {
    console.log("x", x)
    return x === 100;
})


console.log(foundNumbers)