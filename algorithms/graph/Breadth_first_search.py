# worst-case time complexity : O(|V|+|E|)
# worst-case space complexity : O(|V|)

from collections import deque

# A graph implemented by adjacency list
graph = {}
graph['A'] = ['B', 'G', 'D']
graph['B'] = ['A', 'F', 'E']
graph['C'] = ['F', 'H']
graph['D'] = ['F', 'A']
graph['E'] = ['B', 'G']
graph['F'] = ['B', 'D', 'C']
graph['G'] = ['A', 'E']
graph['H'] = ['C']

def breadth_first_search(graph, root):
    visited_vertices = list()
    visited_vertices.append(root)

    graph_queue = deque([root])

    while len(graph_queue) > 0: 
        node = graph_queue.popleft()
        adj_nodes = graph[node]

        remaining_elements = set(adj_nodes).difference(set(visited_vertices))
        if len(remaining_elements) > 0:
            for elem in sorted(remaining_elements):
                visited_vertices.append(elem)
                graph_queue.append(elem)
    
    return visited_vertices
    

# def Breadth_first_search(graph, s):
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

# if __name__ == '__main__':
#     result =  Breadth_first_search(graph, 'A')
#     print(result)

#     if result == ['A', 'B', 'G', 'D', 'F', 'E', 'C', 'H']:
#         print("PASS!")
#     else :
#         print("NO PASS!")