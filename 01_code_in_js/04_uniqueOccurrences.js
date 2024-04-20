var uniqueOccurrences = function (arr) {
  let oc = 0;
  for (let i = 0; i < arr.length; i++) {
    // oc = oc +( oc ^ arr[i]);
    console.log(arr[i], " ", arr[i + 1], " ", arr[i] ^ arr[i + 1]);
  }
  //  console.log(2^2)
};

let arr = [1, 2, 2, 1, 1, 3];
uniqueOccurrences(arr);
