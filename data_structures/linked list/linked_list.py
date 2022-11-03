# https://www.geeksforgeeks.org/insertion-in-linked-list/
# https://www.geeksforgeeks.org/deletion-in-linked-list/

# Node class
class Node:

    # Function to initialize the node object
    def __init__(self, data):
        self.data = data # Assign data
        self.next = None # Initialize next as null

# Linked List class
class LinkedList:

    # Function to initialize the Linked List object
    def __init__(self):
        self.head = None

    # methods to insert a new node in the linked list are discussed. A node can be added in three ways 
    
    """
    time complexity = O(1)
    space complexity = O(1)
    """
    # 1. Add a node at the front:
    # This function is in LinkedList class
    # Function to insert a new node at the beginning
    def push(self, new_data):

        # 1 & 2: Allocate the Node &
        #        Put in the data
        new_node = Node(new_data)

        # 3. Make next of new Node as head
        new_node.next = self.head

        # 4. Move the head to point to new Node
        self.head = new_node

    """
    time complexity = O(1)
    space complexity = O(1)
    """
    # 2. Add a node after a given node:
    def insertAfter(self, prev_node, new_data):
        
        # 1. check if the given prev_node exists
        if prev_node is None:
            print("The given previous node must in LinkedList.")
            return
        
        # 2. Create new node &
        # 3. Put in the data
        new_node = Node(new_data)

        # 4. Make next of new Node as next of prev_node
        new_node.next = prev_node.next

        # 5. make next of prev_node as new_node
        prev_node.next = new_node

    """
    time complexity = O(n)
    space complexity = O(1)
    """
    # 3. Add a node at the end
    def append(self, new_data):

        # 1. Create a new node
        # 2. Put in the data
        # 3. Set next as None
        new_node = Node(new_data)
        
        # 4. If the Linked List is empty, then make the
        #    new node as head
        if self.head is None:
            self.head = new_node
            return
        # 5. Else traverse till the last node
        else:
            last = self.head
            while last.next:
                last = last.next
            
            # 6. Change the next of last node
            last.next = new_node

    # Utility function to print the linked list
    def printList(self):
        temp = self.head
        while temp:
            print(temp.data,end=" ")
            temp = temp.next

# Code execution starts here
if __name__=='__main__':
  
    # Start with the empty list
    llist = LinkedList()
  
    # Insert 6.  So linked list becomes 6->None
    llist.append(6)
  
    # Insert 7 at the beginning. So linked list becomes 7->6->None
    llist.push(7)
  
    # Insert 1 at the beginning. So linked list becomes 1->7->6->None
    llist.push(1)
  
    # Insert 4 at the end. So linked list becomes 1->7->6->4->None
    llist.append(4)
  
    # Insert 8, after 7. So linked list becomes 1 -> 7-> 8-> 6-> 4-> None
    llist.insertAfter(llist.head.next, 8)
  
    print('Created linked list is: ')
    llist.printList()
