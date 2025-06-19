# Definition for a binary tree node.
# class TreeNode(object):
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution(object):
    def diameterOfBinaryTree(self, root):
        """
        :type root: Optional[TreeNode]
        :rtype: int
        """
        self.diameter=0
        def height(r):
            if r==None:
                return 0
            l_h=height(r.left)
            r_h=height(r.right)
            self.diameter=max(self.diameter,l_h+r_h)
            return 1+max(l_h,r_h)
        
        height(root)
        return self.diameter
        