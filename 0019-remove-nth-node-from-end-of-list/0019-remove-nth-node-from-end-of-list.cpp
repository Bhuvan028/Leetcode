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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        if(head==NULL || head->next==NULL) return NULL;
        ListNode* curr=head;
         int len=0;
        ListNode* lv=head;
        while(lv!=NULL){
            lv=lv->next;
            len++;
        }
        if(len==n){
            
            return head->next;
        }
        ListNode* vr;
        int c=0;
        while(c<len-n-1){
            curr=curr->next;
            c++;
        }
       if(curr->next!=nullptr) curr->next=curr->next->next;
        ///curr->next=vr;
        return head;
        
    }
};