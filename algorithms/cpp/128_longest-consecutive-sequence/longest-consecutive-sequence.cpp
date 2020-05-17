class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> st;
        for(int n: nums) st.insert(n);
        int ans = 0;
        for(int i: st){
            if(i != INT_MIN && st.count(i-1)){
                continue;
            }
            int cnt = 1;
            while(i!=INT_MAX && st.count(i+1)){
                cnt ++;
                i++;
            }
            ans = max(ans, cnt);
        }
        return ans;

    }
};