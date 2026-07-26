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
    bool isPalindrome(ListNode* head) {
        if (head == NULL || head->next == NULL)
            return true;

        ListNode *prev = NULL;
        ListNode *curr = NULL;
        ListNode *tmr = head;
        ListNode *two = head;

        int count = 0;
        while (two != NULL) {
            count++;
            two = two->next;
        }

        int mid = count / 2;

        for (int i = 0; i < mid; i++) {
            curr = tmr;
            tmr = tmr->next;
            curr->next = prev;
            prev = curr;
        }

        if (count % 2 == 1) {
            tmr = tmr->next;
        }

        curr = prev;
        while (curr != NULL && tmr != NULL) {
            if (curr->val != tmr->val)
                return false;
            curr = curr->next;
            tmr = tmr->next;
        }

        return true;
    }
};