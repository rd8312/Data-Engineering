class AbstractTree:
    def __init__(self, data):
        self.data = { "data" : data}

class Leaf(AbstractTree):
    def __init__(self, data) -> AbstractTree:
        super().__init__(data)

class BiTree(AbstractTree):
    def __init__(self, data) -> AbstractTree:
        super().__init__(data)
        self.left_child = None
        self.right_child = None
