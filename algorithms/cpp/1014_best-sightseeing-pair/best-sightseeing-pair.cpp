class Solution {
public:
    int maxScoreSightseeingPair(vector<int>& A) {
        int pre_max = A[0]+0;
        int res=0;
        for (int i=1;i<A.size();i++)
        {
            res = max(res, pre_max + A[i] - i);
            pre_max = max(pre_max,A[i]+i);
        }
        return res;

    }
};