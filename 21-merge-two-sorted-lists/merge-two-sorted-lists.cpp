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
    void insert(ListNode* &head,int value){
        ListNode* node=new ListNode(value);
        if(head==NULL){
            head=node;
            return;
        }

        ListNode* temp=head;
        while(temp->next!=NULL){
            temp=temp->next;
        }
        temp->next=node;

    }
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode* head=NULL;
        if(list1==NULL && list2==NULL){
            return head;
        }if(list1==NULL) return list2;
        if(list2==NULL)  return list1;
        while(list1!=NULL && list2!=NULL){
            if(list1->val<list2->val){
                insert(head,list1->val);
                list1=list1->next;

            }else{
                insert(head,list2->val);
                list2=list2->next;
            }
        }
        while(list1!=NULL){
            insert(head,list1->val);
            list1=list1->next;
        } 
        while(list2!=NULL){
            insert(head,list2->val);
            list2=list2->next;
        }
        return head;
    }
};