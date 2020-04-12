class Solution {
public:
    int simple_rob(vector<int>& nums,int start,int end)
    {
        int n2=0,n1=0;
        for(int i=start;i<end;i++)
        {
            int current = max(n1,n2+nums[i]);
            n2 = n1;
            n1 = current;
        }
        return n1;
    }
    int rob(vector<int>& nums) {
        int n =nums.size();
        if (n==0)
        {
            return 0;
        }
        else if(n==1)
        {
            return nums[0];
        }
        else if (n==2)
        {
            return max(nums[0],nums[1]);
        }
        else
        {
            int m1 = simple_rob(nums,0,n-1);
            int m2 = simple_rob(nums,1,n);
            return max(m1,m2);
        }

    }
};