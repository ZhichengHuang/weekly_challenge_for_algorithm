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
    void dfs(TreeNode* root,vector<int>& results)
    {
        if (root)
        {
            dfs(root->left,results);
            results.push_back(root->val);
            dfs(root->right,results);
        }
    }
    bool isValidBST(TreeNode* root) {
        if (root == NULL)
            return true;
        vector<int> results;

        dfs(root,results);
        for(int i=1;i<results.size();i++)
        {
            if (results[i-1]>=results[i])
            {
                return false;
            }
        }
        return true;

    }
};