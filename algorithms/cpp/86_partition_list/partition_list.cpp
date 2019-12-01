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
    ListNode* partition(ListNode* head, int x) {
        ListNode tmpHead(0);
        tmpHead.next = head;
        head = &tmpHead;

        ListNode *pos = NULL;
        for(ListNode *p = head; p!=NULL && p->next!=NULL; ){
            if (!pos && p->next->val >= x){
                pos = p;
                p=p->next;
                continue;
            }
            if (pos && p->next->val < x){
                ListNode *pNext = p->next;
                p->next = pNext->next;
                pNext->next = pos->next;
                pos->next = pNext;
                pos = pNext;
                continue;
            }
        p=p->next;
    }
    
    return head->next;