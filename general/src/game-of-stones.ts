function gameOfStones(n: number) {
  const P1 = 'First';
  const P2 = 'Second';
  let turn = 0;
  let winner: string;
  while (true) {
    let currentPlayer = turn % 2 === 0 ? P1 : P2;
    if (n === 1 || n === 0) {
      if (currentPlayer === P1) {
        winner = P2;
        break;
      } else {
        winner = P1;
        break;
      }
    } else {
      if (n - 2 === 0 || n - 2 === 1) {
        n = n - 2;
      } else if (n - 5 === 0 || n - 5 === 1) {
        n = n - 5;
      } else {
        n = n - 3;
      }
    }
    turn++;
  }
  return winner;
}

export default gameOfStones;
