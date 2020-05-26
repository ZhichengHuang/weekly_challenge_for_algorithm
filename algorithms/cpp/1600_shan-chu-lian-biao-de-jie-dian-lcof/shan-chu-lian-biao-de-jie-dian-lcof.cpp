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
    ListNode* deleteNode(ListNode* head, int val) {
        if (head->val==val)
        {
            return head->next;
        }
        ListNode *pre=head;
        ListNode *cur = head->next;
        while(cur && cur->val !=val)
        {
            pre=cur;
            cur = cur->next;
        }
        if (cur->val==val)
        {
            pre->next = cur->next;
        }
        return head;

    }
};