class Queue:

    def __init__(self):
        self.items = []
        self.number = 0

    def is_empty(self):
        return self.items == []

    def enqueue(self, data):
        self.items.insert(0,data)
        self.number +=1

    def dequeue(self):
        data = self.items.pop()
        self.number -=1
        return data

    def check_number(self):
        return self.number