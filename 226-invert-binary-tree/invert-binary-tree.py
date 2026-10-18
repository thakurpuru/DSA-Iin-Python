# Definition for a binary tree node.
# class TreeNode(object):
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution(object):
    def invertTree(self, root):
        """
        :type root: Optional[TreeNode]
        :rtype: Optional[TreeNode]
        """
        def inorder(node):
            if not node:
                return None

            head=TreeNode(node.val)
            head.left=inorder(node.right)
            head.right=inorder(node.left)
            return head
        return inorder(root)
        