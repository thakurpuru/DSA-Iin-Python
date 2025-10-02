# Definition for a binary tree node.
# class TreeNode(object):
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution(object):
    def hasPathSum(self, root, targetSum):
        """
        :type root: Optional[TreeNode]
        :type targetSum: int
        :rtype: bool
        """
        if root==None:
            return False
        def traversal(node,su_m):
            su_m+=node.val
            if not node.left and not node.right:
                return su_m==targetSum
            l_r=False
            r_r=False
            if node.left:
                l_r=traversal(node.left,su_m)
            if node.right:
                r_r=traversal(node.right,su_m)
            return l_r or r_r
        return traversal(root,0)

        