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
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        if(left==right) return head;
        if(head==NULL)return head;
        ListNode* dummy= new ListNode(0);
        dummy->next=head;
        ListNode* start=dummy;
        
        for(int i=1;i<left;i++){
            start=start->next;
        }
        ListNode* curr=start->next;
        ListNode* prev=start;
        ListNode* next;
        int count=0;
        while(curr!=NULL && count<=right-left){
            next=curr->next;
            curr->next=prev;
            prev=curr;
            curr=next;
            
            count++;
        }
        start->next->next=next;
        start->next=prev;
        
        return dummy->next;

    }
};