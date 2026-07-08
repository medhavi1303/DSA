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
    ListNode *detectCycle(ListNode *head) {
        ListNode* node=head;
        ListNode* fast=head;
        ListNode* slow=head;
    
    // Traverse the list
    while (fast != nullptr && fast->next != nullptr) {
      
      	// Move slow pointer by one step
        slow = slow->next;          
      
      	// Move fast pointer by two steps
        fast = fast->next->next;    

        // Detect loop
        if (slow == fast) {
          
            // Move slow to head, keep fast at meeting point
            slow = head;
            
            // Move both one step at a time until they meet
            while (slow != fast) {
                slow = slow->next;
                fast = fast->next;
            }
            
            // Return the meeting node, which
          	// is the start of the loop
            return slow;
        }
    }
    return NULL;
    }
};