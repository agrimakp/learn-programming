const number = [1.1,2.2,3.3,4.4,5.5,6.6,7.7,8.8,9.9,10.10];
console.log("entered "+ number.length + " real numbers")
for (let index = 0; index < number.length; index++) {
  const element = number[index];
  console.log(element);
}
// compute the sum of thier squares
let total = 0.0;
for (let index = 0; index < number.length; index++) {
  total = total + number[index] * number[index];
}

console.log(total.toFixed(2))


