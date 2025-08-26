"""
# Definition for a Node.
class Node(object):
    def __init__(self, val = 0, neighbors = None):
        self.val = val
        self.neighbors = neighbors if neighbors is not None else []
"""

class Solution(object):
    def cloneGraph(self, node):
        """
        :type node: Node
        :rtype: Node
        """
        oddTonew={}
        def dfs(node):
            if node in oddTonew:
                return oddTonew[node]
            copy=Node(node.val)
            oddTonew[node]=copy
            for i in node.neighbors:
                copy.neighbors.append(dfs(i))
            return copy
        return dfs(node) if node else None
        