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
    int max_T(int a, int b, int c, int d) {
        return max(a, max(b, max(c,d)));
    }
    void rob_or_not(TreeNode* root,int &max_robbed,int &max_not_robbed)
    {
        if(root==NULL)
        {
            max_robbed = max_not_robbed = 0;
            return;
        }
        int max_left_robbed,max_left_not_robbed;
        int max_right_robbed,max_right_not_robbed;
        rob_or_not(root->left,max_left_robbed,max_left_not_robbed);
        rob_or_not(root->right,max_right_robbed,max_right_not_robbed);
        max_robbed = root->val +max_left_not_robbed+max_right_not_robbed;

        max_not_robbed = max_T(max_left_robbed+max_right_robbed,
                            max_left_robbed+max_right_not_robbed,
                            max_left_not_robbed+max_right_robbed,
                            max_left_not_robbed+max_right_not_robbed);
    }
    int rob(TreeNode* root) {
        int robbed,not_robbed;
        rob_or_not(root,robbed,not_robbed);
        return max(robbed,not_robbed);

    }
};