class Solution {
public:
    bool wordBreak(string s, vector<string>& wordDict) {
        vector<int> dp(s.size()+1, 0);
        dp[0] = 1;
        for(int i=0; i<=s.size(); ++i) {
            for(auto word: wordDict) {
                int ws = word.size();
                if(i - ws >= 0) {
                    int cur = s.compare(i-ws, ws, word);
                    if (cur==0 && dp[i-ws]==1) {
                        dp[i] = 1;
                    }
                }
            }
        }
        return dp[s.size()];
        
    }
};