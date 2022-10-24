# worst-case time complexity : O(|V|+|E|)
# worst-case space complexity : O(|V|)

from collections import deque
import random
from tree import *

def breadth_first_search(graph, root):
        
    tree_root = BinarySearchTree(root)
    tree_root.data["color"] = "GRAY"
    tree_root.data["dis"] = 0
    tree_root.data["parent"] = None

    vertices_list = [x for x in range(len(graph))]
    vertices_list.remove(root)
    random.shuffle(vertices_list)
    for vertex in vertices_list:
        vertex = BinarySearchTree(vertex)
        vertex.data["color"] = "WHITE"
        vertex.data["dis"] = float("inf")
        vertex.data["parent"] = None
        tree_root.append(vertex)

    Q = deque()
    Q.append(root)
    while Q:
        u = Q.popleft()
        parent_node = tree_root.find(u)
        for v in graph[u]:
            child_node = tree_root.find(v)
            if child_node.data["color"] == "WHITE":
                child_node.data["color"] = "GRAY"
                child_node.data["dis"] = parent_node.data["dis"] + 1
                child_node.data["parent"] = parent_node
                parent_node.data["next"] = child_node
                Q.append(v)
                
        parent_node.data["color"] = "BLACK"
    
    return tree_root

"""
# def breadth_first_search(graph, root):
#     visited_vertices = list()
#     visited_vertices.append(root)

#     graph_queue = deque([root])

#     while len(graph_queue) > 0: 
#         node = graph_queue.popleft()
#         adj_nodes = graph[node]

#         remaining_elements = set(adj_nodes).difference(set(visited_vertices))
#         if len(remaining_elements) > 0:
#             for elem in sorted(remaining_elements):
#                 visited_vertices.append(elem)
#                 graph_queue.append(elem)
    
#     return visited_vertices
    
# def breadth_first_search(graph, s):
#     visit_list = []
#     visit_list.append(s)
#     Q = deque()
#     Q.append(s)
#     while Q:
#         u = Q.popleft()
#         for v in graph[u]:
#             if v in visit_list:
#                 continue
#             else:
#                 visit_list.append(v)
#                 Q.append(v)
#     return visit_list
"""

if __name__ == '__main__':
    
    # using list implemented adjacency list
    # A,B,C,D,E,F,G,H
    # 0,1,2,3,4,5,6,7
    graph = [[1, 3, 6], [0, 4, 5], [5, 7], [0, 5], [1, 6], [1, 2, 3], [0, 4], [2]]

    """
    # A graph implemented by adjacency list
    # graph = {}
    # graph['A'] = ['B', 'G', 'D']
    # graph['B'] = ['A', 'F', 'E']
    # graph['C'] = ['F', 'H']
    # graph['D'] = ['F', 'A']
    # graph['E'] = ['B', 'G']
    # graph['F'] = ['B', 'D', 'C']
    # graph['G'] = ['A', 'E']
    # graph['H'] = ['C']
    """

    start_node = 0
    result =  breadth_first_search(graph, start_node)
    
    #implement print
