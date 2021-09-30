class Queue:
    def __init__(self, size):
        self.items = []
        self.size = size
        self.count = 0

    def is_empty(self):
        return self.items == []

    def is_full(self):
        return self.count == self.size

    def enqueue(self, data):
        if self.is_full():
            print('The Queue is full, it can\'t enqueue any element!')
            return None
        else:
            self.items.append(data)
            self.count +=1

    def dequeue(self):
        if self.is_empty():
            print('The Queue is empty, it can\'t dequeue any element!')
            return None
        else:
            data = self.items.pop(0)
            self.count -=1
            return data


if __name__ == '__main__':

    test = Queue(8)
    test.enqueue(0)
    test.enqueue(1)
    test.enqueue(2)
    test.enqueue(3)
    print(test.items)
    element1 = test.dequeue()
    element2 = test.dequeue()
    element3 = test.dequeue()
    element4 = test.dequeue()
    element5 = test.dequeue()
    print(element1, element2, element3, element4, element5)
    print(test.items)
    test.enqueue(4)
    test.enqueue(5)
    test.enqueue(6)
    print(test.items)
    print(test.count)
    element7 = test.enqueue(7)
    element8 = test.enqueue(8)
    element9 = test.enqueue(9)
    element10 = test.enqueue(10)
    element11 = test.enqueue(11)
    element12 = test.enqueue(12)
    print(element7, element8, element9, element10, element11, element12)
    print(test.count)
    print(test.items)
