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