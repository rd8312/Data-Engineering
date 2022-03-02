class Node:
    
    def __init__(self, data=None):
        self.data = data
        self.next = None

class LinkedListIndex:
    
    def __init__(self, index):
        self.index = index
        self.point = Node

class LinkedList:

    def __init__(self):
        self.front = None
        self.rear = None
        self.size = 0        

    def insert(self, index, data):
        new_node = (index, Node(data))
        if self.rear:
            self.rear.next = new_node
            self.rear = new_node
        else:
            self.rear = new_node
            self.front = new_node
        self.size += 1
    
    def delete(self, position):
        # If linked list is empty
        if self.head == None:
            return
 
        # Store head node
        temp = self.head
 
        # If head needs to be removed
        if position == 0:
            self.head = temp.next
            temp = None
            return
 
        # Find previous node of the node to be deleted
        for i in range(position -1 ):
            temp = temp.next
            if temp is None:
                break
 
        # If position is more than number of nodes
        if temp is None:
            return
        if temp.next is None:
            return
 
        # Node temp.next is the node to be deleted
        # store pointer to the next of node to be deleted
        next = temp.next.next
 
        # Unlink the node from linked list
        temp.next = None
 
        temp.next = next



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