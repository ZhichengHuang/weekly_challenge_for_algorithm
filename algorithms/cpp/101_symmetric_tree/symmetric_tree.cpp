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
    bool isSymmetric(TreeNode* root) {
        if (root ==NULL) return true;
        return isSymmetricFunc(root->left,root->right);
        
    }
    bool isSymmetricFunc(TreeNode *p, TreeNode* q)
    {
        if (p==NULL && q==NULL) 
        {
            return true;
        }
        if (p==NULL || q==NULL)
        {
            return false;
        }
        return (p->val ==q->val) && isSymmetricFunc(p->left,q->right) && isSymmetricFunc(p->right,q->left);
    }
};