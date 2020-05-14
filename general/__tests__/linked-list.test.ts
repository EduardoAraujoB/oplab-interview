import LinkedList from '../src/linked-list';

describe('linked list', () => {
  let list: LinkedList;
  beforeAll(() => {
    list = new LinkedList();
  });

  it('should return if a list is empty', () => {
    expect(list.isEmpty()).toBe(true);
  });

  it('should push a new value', () => {
    list.push(5);

    expect(list.tail).toHaveProperty('value', 5);
  });

  it('should print a list', () => {
    list.push(6);
    list.push(7);

    const printedList = list.printList();

    expect(printedList).toEqual('5 -> 6 -> 7');
  });
});
