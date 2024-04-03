const add1 = (n) => {
  let total = 0;
  for (let i = 0; i <= n; i++) {
    total += i;
  }
  return total;
};

const add2 = (n) => {
  return (n * (n - 1)) / 2;
};

let t1 = performance.now();
console.log(add1(600000000));

let t2 = performance.now();

console.log(`Time Elapsed: ${(t2 - t1) / 1000} seconds.`);
