class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        vector<int> res;
        unordered_map<int, int> mp;
        stack<int> sk;
        for(int n: nums2){
            while(!sk.empty() && sk.top() < n){
                mp[sk.top()] = n;
                sk.pop();
            }
            sk.push(n);
        }
        while(!sk.empty()){
            mp[sk.top()] = -1;
            sk.pop();
        }
        for(int n: nums1){
            res.push_back(mp[n]);
        }
        return res;        
    }
};