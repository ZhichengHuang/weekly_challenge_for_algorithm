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
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        ListNode *p1 = l1, *p2 = l2;
        ListNode tmp(0);

        tmp.next = p1;
        ListNode *prev = &tmp;

        while(p1 && p2)
        {
            if (p1->val < p2->val)
            {
                prev->next = p1;
                p1 = p1->next;
                prev = prev->next;
            }
            else
            {
                prev->next = p2;
                p2 = p2->next;
                prev = prev->next;
            }
            
        }
        if (p1){
                prev->next = p1;
            }
            if (p2)
            {
                prev->next = p2;
            }
        return tmp.next;
        
    }
};

/*
if we want to reduce the if statement we can use following methods
*/
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
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        ListNode *p1 = l1, *p2 = l2;
        ListNode tmp(0);

        tmp.next = p1;
        ListNode *prev = &tmp;

        while(p1 && p2)
        {
            if (p1->val < p2->val)
            {
                prev = p1;
                p1 = p1->next;
            }
            else
            {
                prev->next = p2;
                p2 = p2->next;
                prev = prev->next;
                prev->next = p1;
            }
            
        }
        if (p2)
        {
            prev->next = p2;
        }
        return tmp.next;
        
    }
};