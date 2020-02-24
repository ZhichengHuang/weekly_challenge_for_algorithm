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
    ListNode* insertionSortList(ListNode* head) {
        if(!head||!head->next)
            return head;
        ListNode * pre = new ListNode(-1);
        pre -> next = head;

        ListNode * tail = head;
        ListNode * node = head->next; 

        while(node){
            if(node->val < tail->val){
                ListNode * cur = pre;
                while(cur->next && node->val >  cur->next->val){
                    cur = cur->next;
                }
                tail->next = node->next;
                node->next = cur->next;
                cur->next =  node;
                node=tail->next;

            }else{
                tail = tail->next;
                node = tail->next;
            }
        }
        return pre->next;

    }
};