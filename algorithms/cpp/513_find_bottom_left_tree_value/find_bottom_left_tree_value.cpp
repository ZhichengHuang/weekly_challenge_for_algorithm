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
    int res = 0;
    int maxlevel = 0;
    int findBottomLeftValue(TreeNode* root) {
        function(root,1);
        return res;
    }
    void function(TreeNode* root,int level)
    {
        if(root==NULL)
            return;
        function(root->left,level+1);
        if(level>maxlevel)
        {
            maxlevel = level;
            res = root->val;
        }
        function(root->right,level+1);
    }
};