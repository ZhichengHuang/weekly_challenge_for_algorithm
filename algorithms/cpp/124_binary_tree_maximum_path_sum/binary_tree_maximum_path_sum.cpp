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
    int maxPathSum(TreeNode* root) {
        int maxSum = -214783647-1;
        maxPathSum(root,maxSum);
        return maxSum;
    }
private:
    int maxPathSum(TreeNode* root, int &maxSum)
    {
        if(root==NULL)
        {
            return 0;
        }
        int left = maxPathSum(root->left,maxSum);
        int right = maxPathSum(root->right,maxSum);

        /*
        1）root+left
        2) root+right
        3) root
        4) root+left+right
        */
        int val= root->val;
        int maxBranch = left>right?max(left+val,val):max(right+val,val);
        int m = max(left+right+val,maxBranch);
        maxSum = max(maxSum,m);
        return maxBranch;
    }
};