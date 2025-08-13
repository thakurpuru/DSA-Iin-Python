# Definition for a binary tree node.
# class TreeNode(object):
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution(object):
    def isSymmetric(self, root):
        """
        :type root: Optional[TreeNode]
        :rtype: bool
        """
        arr1=[]
        arr2=[]
        def check(root,arr):
            if root==None:
                arr.append(None)
                return
            arr.append(root.val)
            check(root.left,arr)
            check(root.right,arr)
        def checkR(root,arr):
            if root==None:
                arr.append(None)
                return
            arr.append(root.val)
            checkR(root.right,arr)
            checkR(root.left,arr)
        check(root.left,arr1)
        checkR(root.right,arr2)
        return arr1==arr2