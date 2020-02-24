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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>> ans;
        if (!root) return ans;
        deque<TreeNode*> que;
        que.push_back(root);
        bool zigzag = true;
        TreeNode* tmp;
        while (!que.empty()) {
            int Size = que.size();
            vector<int> tmp_vec;
            while (Size) { 
                if (zigzag) { 
                    tmp = que.front();
                    que.pop_front();
                    if (tmp->left) que.push_back(tmp->left); 
                    if (tmp->right) que.push_back(tmp->right);                
                } else { 
                    tmp = que.back();
                    que.pop_back();
                    if (tmp->right) que.push_front(tmp->right); 
                    if (tmp->left) que.push_front(tmp->left);
                }
                tmp_vec.push_back(tmp->val);
                --Size;
            }
            zigzag = !zigzag;
            ans.push_back(tmp_vec);
        }
        return ans;
    }
};