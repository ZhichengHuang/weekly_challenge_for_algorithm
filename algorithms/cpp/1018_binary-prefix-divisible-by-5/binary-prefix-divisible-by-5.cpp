class Solution {
public:
    vector<bool> prefixesDivBy5(vector<int>& A) {
        int num=0;
        vector<bool> res;
        for(int i=0;i<A.size();i++)
        {
            num = (num*2+A[i])%5;
            if (num==0)
            {
                res.push_back(true);
            }
            else
            {
                res.push_back(false);
            }
        }
        return res;

    }
};