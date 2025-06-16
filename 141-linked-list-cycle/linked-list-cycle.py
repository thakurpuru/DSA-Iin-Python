# Definition for singly-linked list.
# class ListNode(object):
#     def __init__(self, x):
#         self.val = x
#         self.next = None

class Solution(object):
    def hasCycle(self, head):
        """
        :type head: ListNode
        :rtype: bool
        """
        slow=head
        fast=head
        if slow==None:
            return False
        if slow.next==None:
            return False
        while fast!=None and fast.next!=None:
            slow=slow.next
            fast=fast.next
            fast=fast.next
            if slow==fast:
                return True
        return False
