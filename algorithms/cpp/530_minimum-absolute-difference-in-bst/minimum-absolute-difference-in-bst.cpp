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
    void midOrder(TreeNode* root,vector<int>& results)
    {
        if (!root)
        {
            return;
        }
        midOrder(root->left,results);
        results.push_back(root->val);
        midOrder(root->right,results);
    }
    int getMinimumDifference(TreeNode* root) {
        if (root==NULL)
        {
            return 0;
        }
        if ((root->left ==NULL) && (root->right==NULL))
        {
            return root->val;
        }
        vector<int> res;
        midOrder(root,res);
        int m=INT_MAX;
        for(size_t i=1; i<res.size(); ++i){
        m = min(m, res[i]-res[i-1]);
        }
        return m;

    }
};