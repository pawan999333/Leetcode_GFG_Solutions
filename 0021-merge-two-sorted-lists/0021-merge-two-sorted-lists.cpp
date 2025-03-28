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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
       ListNode* head=new ListNode(0);
       ListNode* Tail=head;
       while(list1 && list2){
        if(list1->val <= list2->val){
            Tail->next=list1;
            list1=list1->next;
            Tail=Tail->next;
            Tail->next=NULL;
        }else{
            Tail->next=list2;
            list2=list2->next;
            Tail=Tail->next;
            Tail->next=NULL;
        }
       }
       if(list1){
        Tail->next=list1;
       }else{
        Tail->next=list2;
       }
       Tail=head;
       head=head->next;
       delete Tail;
       return head;
    }
};