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
    bool isPalindrome(ListNode* head) {
        stack<int> tmp;
        ListNode* p=head;
        while(p)
        {
            tmp.push(p->val);
            p=p->next;
            
        }
        p=head;
        while(p)
        {
            if (p->val != tmp.top())
            {
                return false;
            }
            else
            {
                p= p->next;
                tmp.pop();
            }
        }
        return true;

    }
};