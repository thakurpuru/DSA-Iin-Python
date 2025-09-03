# Definition for singly-linked list.
# class ListNode(object):
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution(object):
    def addTwoNumbers(self, l1, l2):
        """
        :type l1: Optional[ListNode]
        :type l2: Optional[ListNode]
        :rtype: Optional[ListNode]
        """
        str1=""
        str2=""
        while l1!=None:
            str1+=str(l1.val)
            l1=l1.next
        while l2!=None:
            str2+=str(l2.val)
            l2=l2.next
        
        str3=str(int(str1[::-1]) +int(str2[::-1]))
        i=len(str3)-1
        head=ListNode()
        temp=head
        while i>=0:
            temp1=ListNode(int(str3[i]))
            temp.next=temp1
            temp=temp.next
            i-=1
        return head.next

        