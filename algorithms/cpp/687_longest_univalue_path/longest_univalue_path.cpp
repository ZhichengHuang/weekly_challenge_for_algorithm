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
    int max_ret = 1;
    int longestUnivaluePath(TreeNode* root) {
        arrowLength(root,-1);
        return max_ret-1;
        
    }
    int arrowLength(TreeNode *root,int f)
    {
        if (!root) return 0;
        int left = arrowLength(root->left,root->val);
        int right = arrowLength(root->right,root->val);

        max_ret = max(max_ret,left+right+1);
        if (root->val==f)
            return max(left,right)+1;
        else
            return 0;
    }
};