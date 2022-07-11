function binarySearch(num, arr) {
  let min = 0;
  let arrLength = arr.length - 1;
  let mid = Math.floor(arr.length / 2);
  while (num !== arr[mid]) {
    mid = Math.floor((min + arrLength) / 2);
    if (num < arr[mid]) {
      arrLength = mid;
    } else if (num > arr[mid]) {
      min = mid;
    }
  }
  return mid;
}

function binarySearchRec(num, arr, min = 0, arrLength = arr.length) {
  let mid = Math.floor((min + arrLength) / 2);
  if (num === arr[mid]) {
    return mid;
  }
  if (num < arr[mid]) {
    return binarySearchRec(num, arr, min, mid);
  }
  return binarySearchRec(num, arr, mid, arrLength);
}

function polindrom(str){
  str = str.split('');
  let i = 0;
  let last = str.length-1;
  while(i < Math.floor(str.length)/2) {
    let first = str[i];
    str[i] = str[last];
    str[last] = first;
    i++;
    last--;
  }
  return str.join('')
}
console.log(polindrom('VahE'));