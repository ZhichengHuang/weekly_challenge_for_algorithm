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
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode fake(-1);
    fake.next = head;
    head = &fake;

    ListNode *tail=head;

    bool dup = false;
    for(ListNode *p=head->next;  p && p->next; p=p->next){
        if (dup==false && p->val == p->next->val){
            dup = true;            
            continue;
        }
        if (dup==true && p->val != p->next->val){
            dup = false;
            tail->next = p->next;
            continue;
        }
        if (dup==false){
            tail = p;
        }
    }
    if (dup==true){
        tail->next = NULL;
    }
    return head->next;

    }
};