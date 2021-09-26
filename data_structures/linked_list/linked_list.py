class Node:
    
    def __init__(self, data=None):
        self.data = data
        self.next = None

class LinkedList:

    def __init__(self):
        self.front = None
        self.rear = None
        self.size = 0        

    def insert(self, data):
        new_node = Node(data)
        if self.rear:
            self.rear.next = new_node
            self.rear = new_node
        else:
            self.rear = new_node
            self.front = new_node
        self.size += 1
    
    def delete(self, data):
        current = self.front
        prev = self.front
        while current:
            if current.data == data:
                if current == self.front:
                    self.front = current.next
                else:
                    prev.next = current.next
                self.size -= 1
                return
            prev = current
            current = current.next

    def traverse(self):
        current = self.front
        while current:
            element = current.data
            current = current.next
            yield element

if __name__ == '__main__':

    test = LinkedList()
    test.insert("Sam")
    test.insert("Ben")
    test.insert("John")
    test.insert("Mary")
    for element in test.traverse():
        print(element)
    
    print("-----------------")
    test.delete("John")
    for element in test.traverse():
        print(element)