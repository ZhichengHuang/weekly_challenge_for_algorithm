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
    bool isValidBST(TreeNode* root) {
        vector<TreeNode*> stack;
        TreeNode* node = root;
        vector<int> v;
        while (stack.size()>0 || node!=NULL) {
            if (node!=NULL){
                stack.push_back(node);
                node = node->left;
            }else{
                node = stack.back();
                stack.pop_back();
                v.push_back(node->val);
                node = node->right;
                }
        }

    //check the vector wehther sorted or not
        for(int i=0; v.size()>0 && i<v.size()-1; i++){
            if (v[i] >= v[i+1]) {
                return false;
            }
        }

        return true;

    }
};