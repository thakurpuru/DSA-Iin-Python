# Definition for a binary tree node.
# class TreeNode(object):
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution(object):
    def rightSideView(self, root):
        """
        :type root: Optional[TreeNode]
        :rtype: List[int]
        """
        if root==None:
            return []
        res=[]
        queue=deque([root])
        while queue:
            level_size=len(queue)
            for i in range(level_size):
                node=queue.popleft()
                if i==0:
                    res.append(node.val)
                if node.right:
                    queue.append(node.right)
                if node.left:
                    queue.append(node.left)
        return res
                