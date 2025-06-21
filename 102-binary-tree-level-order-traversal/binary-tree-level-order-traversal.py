# Definition for a binary tree node.
# class TreeNode(object):
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution(object):
    def levelOrder(self, root):
        """
        :type root: Optional[TreeNode]
        :rtype: List[List[int]]
        """
        if root==None:
            return []
        q=deque()
        q.append(root)
        res=[]
        currlevel=0
        while q:
            res.append([])
            size=len(q)
            for i in range(0,size):
                node=q.popleft()
                res[currlevel].append(node.val)
                if node.left!=None:
                    q.append(node.left)
                if node.right!=None:
                    q.append(node.right)
            currlevel+=1
        return res

