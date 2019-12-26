/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    TreeNode* sortedListToBST(ListNode* head) {
        int len=0;
        for(ListNode* p=head; p!=NULL; p=p->next)
        {
            len++;
        }
        return sortedListToBSTFunc(0,len-1,head);
        
    }

    TreeNode* sortedListToBSTFunc(int low,int high,ListNode*& head)
    {
        if (low>high || head==NULL) return NULL;

        int mid = low + (high - low)/2;

        TreeNode* leftNode = sortedListToBSTFunc(low, mid-1, head);

        TreeNode* node = new TreeNode(head->val);
        node->left = leftNode;
        head = head->next;

        TreeNode* rightNode = sortedListToBSTFunc(mid+1, high, head);
        node->right = rightNode;

        return node;
    }
};