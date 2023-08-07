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
    ListNode* deleteMiddle(ListNode* head) {
        if(head==NULL ) return head;
        if(head->next==NULL) return NULL;
        ListNode* lv=head;
        ListNode* curr=head;
        int len=0;
        while(lv!=NULL){
            lv=lv->next;
            len++;
        }
        
        int mid=len/2;
        int c=0;
        while(c<mid-1){
            curr=curr->next;
            c++;
        }
        curr->next=curr->next->next;
        return head;
    }
};