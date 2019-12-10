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
    vector<int> preorderTraversal(TreeNode* root) {
        vector<TreeNode*> tmp;
        vector<int> value;
        while(root !=NULL || tmp.size()>0)
        {
            if(root !=NULL)
            {
                value.push_back(root->val);
                tmp.push_back(root);
                root=root->left;
            }
            else
            {
                root=tmp.back();
                tmp.pop_back();
                root = root->right;
            }
        }
        return value;
    }
};