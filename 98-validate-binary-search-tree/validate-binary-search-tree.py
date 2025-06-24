# Definition for a binary tree node.
# class TreeNode(object):
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution(object):
    def isValidBST(self, root):
        """
        :type root: Optional[TreeNode]
        :rtype: bool
        """
        def traversal(root,low,high):
            if root==None:
                return True
            if root.val<=low or root.val>=high:
                return False
            return traversal(root.left,low,root.val) and traversal(root.right,root.val,high)
        return traversal(root,float('-inf'),float('inf'))




            
        