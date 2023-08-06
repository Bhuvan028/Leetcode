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
    ListNode* rotateRight(ListNode* head, int k) {
        if(head==NULL || head->next==NULL) return head;
        ListNode* curr=head;
        ListNode* hd=head;
        ListNode* curr1=head;
        int len=0;
        while(curr!=NULL){
            curr=curr->next;
            len++;
        }
        if(k>=len) k=k%len;
        if(k==0) return head;
        int c=0;
        while(c<len-k-1){
            curr1=curr1->next;
            c++;
        }
        ListNode* temp=curr1->next;
        curr1->next=NULL;

        ListNode* newhd=temp;
        while(temp->next!=NULL){
            temp=temp->next;
        }
        temp->next=hd;
        return newhd;
        
        
    }
};