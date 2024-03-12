class ArrayList:

    def __init__(self, capacity):
        
        self.size = 0
        self.capacity = capacity
        self.data = [0] * self.capacity
    
    def add(self, value):
        if self.size > self.capacity:
            raise Exception("The array is full.")
        
        self.data[self.size] = value
        self.size +=1

    def delete(self, index):
        if self.size < 0:
            raise Exception("The array is empty.")
        
        if index < 0:
            raise Exception("The index can't be negative.")
        
        if index > self.size:
            raise Exception("The index of value is empty.")
        
        del_n = self.data[index]
        for i in range(index, self.size+1):
            if i == self.size:
                self.data[i] = 0
            self.data[i] = self.data[i+1]

        self.size -=1
        return del_n

    def modify(self, index, value):
        self.data[index] = value

    def resize(self, resize):
        resize_array = [0] * resize
        self.capacity = resize

        for i in range(resize):
            if i+1 > self.size:
                resize_array[i] = 0
            else:
                resize_array[i] = self.data[i]

        if self.size > resize:
            self.size = resize

        self.data = resize_array

    def find(self):
        pass

    def insert(self):
        pass

    def traverse(self):
        pass

