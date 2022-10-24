class AbstractNode:
    def __init__(self, data):
        self.data = { "data" : data}
    
    def append(self):
        pass

    def find(self):
        pass

class Leaf(AbstractNode):
    def __init__(self, data) -> AbstractNode:
        super().__init__(data)

class CompleteBinaryTree(AbstractNode):
    def __init__(self, data) -> AbstractNode:
        super().__init__(data)
        self.left_child = None
        self.right_child = None  

    # implement append
    # def append(self, node):
    #     if self.left_child == None:
    #             self.left_child = node
    #     elif self.right_child == None:
    #         self.right_child = node
    #     else:
    #         if self.left_child.left_child == None:
    #                 self.left_child.left_child = node
    #         elif self.left_child.right_child == None:
    #             self.left_child.right_child = node
    #         else:


class BinarySearchTree(AbstractNode):
    def __init__(self, data) -> AbstractNode:
        super().__init__(data)
        self.left_child = None
        self.right_child = None

    def append(self, node):
        if  node.data["data"] < self.data["data"]:
            if self.left_child != None:
                self.left_child.append(node)
            else:
                self.left_child = node
        else:
            if self.right_child != None:
                self.right_child.append(node)
            else:
                self.right_child = node
    
    def find(self, data):
        if self.data["data"] == data:
            return self
        elif (data < self.data["data"]) & (self.left_child != None):
            return self.left_child.find(data)
        elif (data > self.data["data"]) & (self.right_child != None):
            return self.right_child.find(data)
        else:
            print("There is no matching data in the tree.")
            return False
