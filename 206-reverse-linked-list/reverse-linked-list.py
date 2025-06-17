# Definition for singly-linked list.
# class ListNode(object):
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution(object):
    def reverseList(self, head):
        """
        :type head: Optional[ListNode]
        :rtype: Optional[ListNode]
        """
        temp=head
        curr=None
        pre=None
        while temp!=None:
            curr=temp
            temp=temp.next
            curr.next=pre
            pre=curr
        return curr