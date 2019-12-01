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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        int x=0,y=0,carry=0,sum=0;
        ListNode * sum_node=NULL;
        ListNode **p=&sum_node;
        while(l1 || l2)
        {
            x = getValue(l1);
            y = getValue(l2);

            sum = carry + x+y;
            
            ListNode * new_node = new ListNode(sum%10);
            *p = new_node;
            p = (&new_node->next);
            carry = sum/10;
        }
        if (carry>0)
        {
            ListNode * new_node = new ListNode(carry%10);
            *p = new_node;
           
        }
        return sum_node;
        

        
    }
private:
    int getValue(ListNode * &l)
    {
        int x = 0;
        if (l !=NULL)
        {
            x = l->val;
            l = l->next;
        }
        return x;
    }
};