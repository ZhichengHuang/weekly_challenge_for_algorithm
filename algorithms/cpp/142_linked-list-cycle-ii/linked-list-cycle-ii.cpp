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
        ListNode * fast = head;
        ListNode * slow = head;
        while(true)
        {
            if (not(fast && fast->next))
            {
                return NULL;
            }
            slow = slow->next;
            fast = fast->next->next;
            if (fast==slow)
            {
                break;
            }
        }
        fast=head;
        while(fast!=slow)
        {
            fast=fast->next;
            slow = slow->next;
        }
        return fast;
        
    }
};