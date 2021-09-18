class Stack_Queue:

    def __init__(self):
        self.input_stack = []
        self.output_stack = []
    
    def enqueue(self, data):
        self.input_stack.append(data)

    def dequeue(self):
        if not self.output_stack:
            while self.input_stack:
                self.output_stack.append(self.input_stack.pop())
        return self.output_stack.pop()



if __name__ == '__main__':
    test_queue = Stack_Queue()

    import time
    start_time = time.time()
    for i in range(100000):
        #print(i)
        test_queue.enqueue(i)
    for i in range(100000):
        test_queue.dequeue()
    print("--- %s seconds ---" % (time.time() - start_time))