class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int max_diff=0;
        int begin=0;
        int end=0;
        int diff=0;
        for (int i=0;i<prices.size();i++)
        {
            end=i;
            diff = prices[end]-prices[begin];
            if (diff<=0)
            {
                begin=i;
            }
            if (diff>max_diff)
            {
                max_diff=diff;
            }
        }
        return max_diff;
        
    }
};