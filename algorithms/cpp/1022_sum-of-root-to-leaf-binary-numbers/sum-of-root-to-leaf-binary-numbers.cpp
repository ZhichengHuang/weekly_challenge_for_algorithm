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
    int sumRootToLeaf(TreeNode* root) {
        int base=0;
        return function(root,base);

    }
    int function(TreeNode* root,int base)
    {
        if (root==NULL)
        {
            return 0;
        }
        if ((root->left==NULL) &&(root->right==NULL))
        {
            return 2*base+root->val;
        }
        base = 2 * base + root->val;
        return function(root->left,base)+function(root->right,base);
    }
};