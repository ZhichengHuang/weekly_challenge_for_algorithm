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
    vector<int> largestValues(TreeNode* root) {
        vector<int> res;
        function(root,0,res);
        return res;

    }
    void function(TreeNode* root,int level,vector<int> & res)
    {
        if(root==NULL)
        {
            return;
        }
        if(level==res.size())
        {
            res.push_back(root->val);
        }
        else
        {
            res[level]=max(res[level],root->val);
        }
        function(root->left,level+1,res);
        function(root->right,level+1,res);
    }
};