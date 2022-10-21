from datetime import date


class AbstractTree:
    def __init__(self, data):
        self.data = data
        self.info = {}

class Leaf(AbstractTree):
    def __init__(self, data):
        super().__init__(data)

class BiTree(AbstractTree):
    def __init__(self, data):
        super().__init__(data)
        self.left_child = None
        self.right_child = None