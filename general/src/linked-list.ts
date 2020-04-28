interface NodeT {
  value: number;
  next: NodeT | null;
}

function Node(value: number): NodeT {
  return {
    value,
    next: null,
  };
}

class LinkedList {
  head: NodeT | null;
  tail: NodeT | null;
  length: number;

  constructor() {
    this.head = null;
    this.tail = null;
    this.length = 0;
  }

  isEmpty() {
    return this.length === 0;
  }

  printList() {
    const nodes = [];
    let current = this.head;
    while (current) {
      nodes.push(current.value);
      current = current.next;
    }
    return nodes.join(' -> ');
  }

  push(value: number) {
    const node = Node(value);
    if (this.head === null) {
      this.head = node;
      this.tail = node;
      this.length++;
      return node;
    }
    this.tail.next = node;
    this.tail = node;
    this.length++;
  }
}

export default LinkedList;
