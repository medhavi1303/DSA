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
    ListNode* reverseList(ListNode* head) {
        ListNode* curr=head;
        ListNode* n=head;
        ListNode* prev=NULL;
        if(head==NULL) return head;
        while(curr->next!=NULL){
            n=curr->next;
            curr->next=prev;
            prev=curr;
            curr=n;
        }
        curr->next=prev;
        head=curr;
        return head;
    }
};