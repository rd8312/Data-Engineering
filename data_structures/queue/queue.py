class Queue:
    def __init__(self, size):
        self.items = []
        self.size = size
        self.number = 0

    def is_empty(self):
        return self.items == []

    def is_full(self):
        return self.number == self.size

    def enqueue(self, data):
        if not self.is_full():
            self.items.append(data)
            self.number +=1
        else:
            print('The Queue is full, it can\'t enqueue any element!')

    def dequeue(self):
        if not self.is_empty():
            data = self.items.pop(0)
            print('item :', data)
            self.number -=1
            return data
        else:
            print('The Queue is empty, it can\'t dequeue any element!')


if __name__ == '__main__':

    test = Queue(8)
    test.enqueue(0)
    test.enqueue(1)
    test.enqueue(2)
    test.enqueue(3)
    print(test.items)
    test.dequeue()
    test.dequeue()
    test.dequeue()
    test.dequeue()
    test.dequeue()
    print(test.items)
    test.enqueue(4)
    test.enqueue(5)
    test.enqueue(6)
    print(test.items)
    print(test.number)
    test.enqueue(7)
    test.enqueue(8)
    test.enqueue(9)
    test.enqueue(10)
    test.enqueue(11)
    test.enqueue(12)
    print(test.number)
    print(test.items)
