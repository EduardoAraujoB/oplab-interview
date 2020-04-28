function bubble(array: Array<number>): Array<number> {
  let swapped = false;
  array.map((item, index, arr) => {
    if (item > arr[index + 1]) {
      array[index] = arr[index + 1];
      array[index + 1] = item;
      swapped = true;
    }
  });
  if (swapped === false) {
    return array;
  }
  return bubble(array);
}

export default bubble;
