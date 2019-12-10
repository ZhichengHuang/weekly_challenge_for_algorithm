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
    vector<int> postorderTraversal(TreeNode* root) {
        vector<TreeNode*> tmp;
        vector<int> value;
        TreeNode *flag_node=NULL;
        TreeNode *node = root;
        while(tmp.size()>0 || node!=NULL)
        {
            if(node !=NULL)
            {
                tmp.push_back(node);
                node = node->left;
            }
            else
            {
                TreeNode *n=tmp.back();
                if (n->right !=NULL && flag_node !=n->right)
                {
                    node = n->right;
                }
                else{
                    tmp.pop_back();
                    value.push_back(n->val);
                    flag_node=n;
                }
            }
        }
        return value;
        
    }
};

// this code comes from https://github.com/haoel/leetcode/blob/master/algorithms/cpp/binaryTreePostorderTraversal/binaryTreePostorderTraversal.cpp
vector<int> postorderTraversal1(TreeNode *root) {
    vector<int> v;
    vector<TreeNode*> stack;
    if (root) {
        stack.push_back(root);
    }
    while (stack.size()>0){
        TreeNode *n = stack.back();
        stack.pop_back();
        v.push_back(n->val);
        if (n->left){
            stack.push_back(n->left);
        } 
        if (n->right) {
            stack.push_back(n->right);
        }
    }
    std::reverse(v.begin(), v.end());  // the trick
    return v;
}