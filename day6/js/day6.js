"use strict";
// quick sort
const Partition = (arr, s, e) => {
  const pivot = arr[e];
  let i = s - 1;
  for (let j = s; j < e; j++) {
    if (arr[j] < pivot) {
      i++;
      [arr[i], arr[j]] = [arr[j], arr[i]];
    }
  }
  [arr[i + 1], arr[e]] = [arr[e], arr[i + 1]];
  return i + 1;
};

const quickSort = (arr, s, e) => {
  if (s < e) {
    const pi = Partition(arr, s, e);

    quickSort(arr, s, pi - 1);
    quickSort(arr, pi + 1, e);
  }
};
const sortArr = (arr) => {
  quickSort(arr, 0, arr.length - 1);
  return arr;
};

console.log(sortArr([2, 13, 4])); // [2,4,13]
