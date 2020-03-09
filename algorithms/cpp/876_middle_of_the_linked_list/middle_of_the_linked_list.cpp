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
    ListNode* middleNode(ListNode* head) {
        if (head == NULL)
        {
            return NULL;
        }
        ListNode * tmp = head;
        int total_length=0;
        while(tmp!=NULL)
        {
            total_length++;
            tmp=tmp->next;
        }
        int mid_nodel = total_length/2;
        int begin=0;
        while(begin<mid_nodel)
        {
            if(head->next)
            {
                head= head->next;
                begin++;
            }
            else
            {
                break;
            }
            
        }
        return head;

    }
};