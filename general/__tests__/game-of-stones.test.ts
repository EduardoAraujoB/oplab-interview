import game from '../src/game-of-stones';

describe('game of stones', () => {
  it('should p2 wins when a number is 1 or 0', () => {
    const gameWithZero = game(0);
    const gameWithOne = game(1);

    expect(gameWithZero).toEqual('Second');
    expect(gameWithOne).toEqual('Second');
  });

  it('should p2 loses with a number 2 or 3', () => {
    const gameWithTwo = game(2);
    const gameWithThree = game(3);

    expect(gameWithTwo).toEqual('First');
    expect(gameWithThree).toEqual('First');
  });

  it('should p2 loses with a number 4 or 5', () => {
    const gameWithFour = game(4);
    const gameWithFive = game(5);

    expect(gameWithFour).toEqual('First');
    expect(gameWithFive).toEqual('First');
  });
});
