class Solution {
public:
    int numPairsDivisibleBy60(vector<int>& time) {
        if (time.size()<2)
        {
            return 0;
        }
        vector<int> hash(60,0);
        int num=0;
        for (auto item : time)
        {
            int mod=item%60;
            num+=hash[(60-mod)%60];
            hash[mod]++;
        }
        return num;
        
    }
};