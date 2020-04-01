/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/

class Solution {
public:
    int maxDepth(Node* root) {
        if (root== NULL)
        {
            return 0;
        }
        else if (root->children.empty())
        {
            return 1;
        }
        else
        {
            vector<int> results;
            for (auto node: root->children)
            {
                results.push_back(maxDepth(node));
            }
            return *max_element(results.begin(),results.end())+1;
        }
        
    }
};