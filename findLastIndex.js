const numbers = [10, 35, 55, 70, 100, 20, 30, 50];

const foundIndex = numbers.findIndex(x => {
    console.log("x", x)
    return x === 100
})
console.log(foundIndex)