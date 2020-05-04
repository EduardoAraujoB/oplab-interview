import bubble from './bubble-sort';
import LinkedList from './linked-list';
import gameOfStones from './game-of-stones';
import searchTweets from './search-tweets';

console.log('bublle sort');
console.log(bubble([5, 3, 1, 4, 6])); // output: [ 1, 3, 4, 5, 6 ]

const list = new LinkedList();

list.push(5);
list.push(6);
list.push(8);

console.log('linked-list');
console.log(list.printList());

console.log('game-of-stones');
console.log(gameOfStones(1));
console.log(gameOfStones(2));
console.log(gameOfStones(3));
console.log(gameOfStones(4));
console.log(gameOfStones(5));
console.log(gameOfStones(6));
console.log(gameOfStones(7));
console.log(gameOfStones(10));

searchTweets('example')
  .then((result) => {
    console.log(result);
  })
  .catch((err) => console.log(err));
