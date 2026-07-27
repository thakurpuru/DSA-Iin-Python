/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* node=new ListNode(0);
        ListNode* temp=node;
        int carry =0;
        while(l1!=NULL || l2!=NULL){
            int sum=0;
            if((l1 && l2)){
                sum=l1->val+l2->val+carry;
                temp->next=new ListNode(sum%10);
                sum/=10;
                carry=sum%10;
                l1=l1->next;
                l2=l2->next;
            }else if(l1==NULL && l2!=NULL){
                sum=l2->val+carry;
                temp->next=new ListNode(sum%10);
                sum/=10;
                carry=sum%10;
                l2=l2->next;
            }else if(l2==NULL && l1!=NULL){
                sum=l1->val+carry;
                temp->next=new ListNode(sum%10);
                sum/=10;
                carry=sum%10;
                l1=l1->next;
            }
            temp=temp->next;
        }
        if(carry){
            temp->next=new ListNode(carry);
        }
        return node->next;
    }
};