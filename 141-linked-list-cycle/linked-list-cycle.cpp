/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    bool hasCycle(ListNode *head) { //Floyd's finding cycle algorithm
        ListNode* fast= head;
        ListNode* slow=head;
        int pos=1;
        if(fast==NULL) return false;
        while(fast->next!=NULL){
            pos++;
            fast=fast->next;
            if(pos%2!=0) slow=slow->next;
            if(fast->next==slow) return true;
        }
        return false;

    }
};