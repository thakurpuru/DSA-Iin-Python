# Definition for singly-linked list.
# class ListNode(object):
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution(object):
    
    def mergeTwoLists(self, list1, list2):
        """
        :type list1: Optional[ListNode]
        :type list2: Optional[ListNode]
        :rtype: Optional[ListNode]
        """
        head=ListNode(0)
        tail=head
        while list1!=None and list2!=None:
            if(list1.val<list2.val):
                node=ListNode(list1.val)
                tail.next=node
                tail=tail.next
                list1=list1.next
            else:
                node=ListNode(list2.val)
                tail.next=node
                tail=tail.next
                list2=list2.next
        
        while list1!=None:
            node=ListNode(list1.val)
            tail.next=node
            tail=tail.next
            list1=list1.next

        while list2!=None:
            node=ListNode(list2.val)
            tail.next=node
            tail=tail.next
            list2=list2.next
        return head.next
            


        