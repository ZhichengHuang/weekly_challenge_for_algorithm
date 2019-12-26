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
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        if (preorder.empty()) return NULL;
        return buildFunction(preorder,0,preorder.size()-1,inorder,0,inorder.size()-1);
    }
    TreeNode * buildFunction(const vector<int>& preorder, int b1, int e1,const vector<int>& inorder, int b2,int e2)
    {
        if (b1>e1) return NULL;
        if (b1==e1) return new TreeNode(preorder[b1]);
        TreeNode * root = new TreeNode(preorder[b1]);

        int m=0;
        while(b2+m <=e2)
        {
            if (inorder[b2+m]==preorder[b1])
            {
                break;
            }
            m++;
        }
        root->left = buildFunction(preorder,b1+1,b1+m,inorder,b2,b2+m-1);
        root->right = buildFunction(preorder, b1+m+1, e1, inorder, b2+m+1, e2);
        return root;
    }
};