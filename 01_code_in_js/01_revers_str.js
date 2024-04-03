const reversedSTR = (str) => {
  return str.split("").reverse().join("");
};

const fun2 = (str) => {
  // debugger;
  let revers = "";
  for (let i = str.length - 1; i >= 0; i--) {
    // console.log("ss", str[i]);
    revers += str[i];
  }
  return revers;
};

let t1 = performance.now();
console.log(fun2("Meet Rakholiya"));
let t2 = performance.now();

console.log(`Time Elapsed: ${(t2 - t1) / 1000} seconds.`);
