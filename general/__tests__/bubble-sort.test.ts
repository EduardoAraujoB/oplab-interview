import bubble from '../src/bubble-sort';

describe('bubble sort', () => {
  it('should sort a list', () => {
    const sorted = bubble([5, 3, 1, 4, 6]);

    expect(sorted).toEqual([1, 3, 4, 5, 6]);
  });
});
