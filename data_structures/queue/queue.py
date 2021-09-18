class Queue:

    def __init__(self, capacity):
        self.items = []
        self.number = 0
        self.size = capacity
        
    def is_empty(self):
        return self.items == []

    def is_full(self):
        return self.number == self.size

    def enqueue(self, data):

        self.items.insert(0,data)
        self.number +=1

    def dequeue(self):
        data = self.items.pop()
        self.number -=1
        return data

    def check_number(self):
        return self.number


if __name__ == '__main__':
    test_queue = Queue()

    import time
    start_time = time.time()
    for i in range(100000):
        #print(i)
        test_queue.enqueue(i)
    for i in range(100000):
        test_queue.dequeue()
    print("--- %s seconds ---" % (time.time() - start_time))    
