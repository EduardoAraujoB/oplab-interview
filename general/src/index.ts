import bubble from './bubble-sort';
import LinkedList from './linked-list';

console.log(bubble([5, 3, 1, 4, 6])); // output: [ 1, 3, 4, 5, 6 ]

const list = new LinkedList();

list.push(5);
list.push(6);
list.push(8);

console.log(list.printList());
