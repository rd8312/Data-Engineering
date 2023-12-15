# reference: https://medium.com/@derekfan/%E4%B9%9D%E7%AB%A0%E7%AE%97%E6%B3%95-template-trie-tree-%E5%AD%97%E5%85%B8%E6%A8%B9-132e19c6c827
# T(n) = O(n)

class TrieNode:
    def __init__(self, data):
        self.children = {}
        self.is_word = False

class Trie:
    def __init__(self):
        # do intialization
        self.root = TrieNode()

    def insert(self, word):
        """insert word
        
        Parameters
        ----------
        word: str
            a word
        
        Returns
        -------
        None
        """
        node = self.root

        for char in word:
            if char not in node.children:
                node.children[char] = TrieNode()
            node = node.children[char]
        node.is_word = True

    def search(self, word):
        """check if the word is in the trie.
        
        Parameters
        ----------
        word: str
            a word
        
        Returns
        -------
        bool
        """
        node = self.find(word)

        if not node:
            return False
        
        return node.is_word
    
    def startsWith(self, prefix):
        """check if there is any word in the trie that starts with the given prefix.
        
        Parameters
        ----------
        prefix: str
            a subword
        
        Returns
        -------
        bool
        """
        node = self.find(prefix)

        if not node:
            return False
        
        return True
    
    def find(self, prefix):
        node = self.root

        for char in prefix:
            node = node.children.get(char)

            if not node:
                return None
        return node
