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
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        if (nums.size()==0)
        {
            return NULL;
        }
        if (nums.size()==1)
        {
            return new TreeNode(nums[0]);
        }
        int mid = nums.size()/2;
        TreeNode *node = new TreeNode(nums[mid]);

        vector<int>::const_iterator first;
        vector<int>::const_iterator last;

        first = nums.begin();
        last = nums.begin()+mid;
        vector<int> v(first,last);
        node->left = sortedArrayToBST(v);
        if (mid==nums.size()-1)
        {
            node->right=NULL;
        }
        else
        {
            first = nums.begin()+mid+1;
            last = nums.end();
            vector<int> v(first,last);
            node->right = sortedArrayToBST(v);
        }
        return node;
        
    }
};