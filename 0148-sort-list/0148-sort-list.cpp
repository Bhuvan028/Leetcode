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
    ListNode* sortList(ListNode* head) {
        ListNode* t=head;
        vector<int> v;
        while(t) v.push_back(t->val),t=t->next;
        sort(v.begin(),v.end());
        t=head;
        for(auto i:v)   t->val=i,t=t->next;
        return head;
    }
};