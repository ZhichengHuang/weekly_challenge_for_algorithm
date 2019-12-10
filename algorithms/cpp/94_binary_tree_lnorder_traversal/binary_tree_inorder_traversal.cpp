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
    vector<int> inorderTraversal(TreeNode* root) {
        vector<TreeNode*> tmp;
        vector<int> value;

        while(root!=NULL || tmp.size()>0)
        {
            if (root!=NULL)
            {
                tmp.push_back(root);
                root=root->left;
            }
            else
            {
                root = tmp.back();
                tmp.pop_back();
                value.push_back(root->val);
                root=root->right;   
            }
        }
        return value;
        
    }
};