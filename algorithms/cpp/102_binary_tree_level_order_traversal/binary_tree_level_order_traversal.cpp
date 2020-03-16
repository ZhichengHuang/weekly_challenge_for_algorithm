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
    vector<vector<int>> res;
    vector<vector<int>> levelOrder(TreeNode* root) {
        function(root,0);
        return res;
        

    }
    void function(TreeNode* root, int level)
    {
        if(root ==NULL)
            return;
        if (res.size()==level)
        {
            res.resize(level+1);
        }
        res[level].push_back(root->val);
        function(root->left,level+1);
        function(root->right,level+1);
    }
};