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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        if (headA==NULL || headB==NULL)
        {
            return NULL;
        }
        ListNode *point_A = headA;
        ListNode * point_B = headB;
        while(point_A !=point_B)
        {
            point_A= (point_A==NULL)? headB: point_A->next;
            point_B = (point_B==NULL)? headA: point_B->next;
        }
        return point_A;
        
    }
};