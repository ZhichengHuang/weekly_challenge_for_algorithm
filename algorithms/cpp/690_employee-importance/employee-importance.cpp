/*
// Definition for Employee.
class Employee {
public:
    int id;
    int importance;
    vector<int> subordinates;
};
*/

class Solution {
public:
    int getImportance(vector<Employee*> employees, int id) {
        unordered_map<int,Employee*> mp;
        for(auto p:employees)
        {
            if(p==nullptr)
                continue;
            mp[p->id]=p;
        }
        int ans = 0;
        queue<int> q;
        q.push(id);
        while(!q.empty())
        {
            ans += mp[q.front()]->importance;
            for (auto n : mp[q.front()]->subordinates)
            {
                 q.push(n);
            }
            q.pop();
        }
        return ans;
    }
};