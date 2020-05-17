class Solution {
public:
    bool canThreePartsEqualSum(vector<int>& A) {
        int sum = accumulate(A.begin(), A.end(), 0);
        if (sum%3!=0)
        {
            return false;
        }
        int tmp_sum=0;
        int count =0;
        for (int i=0;i<A.size();i++)
        {
            tmp_sum+=A[i];
            if (tmp_sum==sum/3.)
            {
                tmp_sum=0;
                count+=1;
            }
            if (count==2 && i<A.size()-1)
            {
                return true;
            }
        
        }
        return false;

    }
};