class TreeNode:
    def __init__(self, data):
        self.data = data
        self.left_child = None
        self.right_child = None



if __name__ == '__main__':
    n1 = TreeNode("A")
    n2 = TreeNode("B")
    n3 = TreeNode("C")
    n4 = TreeNode("D")

    n1.left_child = n2
    n1.right_child = n3
    n2.left_child = n4