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
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        if (!root || p==root || q==root)
        {
            return root;
        }
        TreeNode* left_node = lowestCommonAncestor(root->left,p,q);
        TreeNode* right_node = lowestCommonAncestor(root->right,p,q);
        if (left_node && right_node)
        {
            return root;
        }
        return left_node?left_node:right_node;
    }
};