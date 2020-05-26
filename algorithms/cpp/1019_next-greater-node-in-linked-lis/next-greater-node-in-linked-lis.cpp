/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    vector<int> nextLargerNodes(ListNode* head) {
        vector<int> value;
        while(head)
        {
            value.push_back(head->val);
            head = head->next;
        }
        vector<int> res(value.size());
        stack<int> s;
        for(int i=0;i<value.size();i++)
        {
            while( (!s.empty()) && value[i]>value[s.top()])
            {
                int index = s.top();
                s.pop();
                res[index]=value[i];
            }
            s.push(i);
        }
        return res;


    }
};