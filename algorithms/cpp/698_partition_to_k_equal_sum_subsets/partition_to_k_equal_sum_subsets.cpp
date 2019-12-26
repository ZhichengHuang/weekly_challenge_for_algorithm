class Solution {
public:
    int n,len;
    bool canPartitionKSubsets(vector<int>& nums, int k) {
        n = nums.size();
        vector<bool> vis(n,false);
        sort(nums.begin(),nums.end());
        for(int i=0;i<n;i++)
        {
            len +=nums[i];
        }
        if(len%k!=0)
        {
            return false;
        }
        len = len/k;
        return dfs(n-1,len,n,nums,vis);
        
    }

    bool dfs(int id,int cur,int sz,vector<int>& arr, vector<bool>& vis)
    {
        if (sz==0) return true;
        bool isok = false;
        for(int i=id;i>=0;i--)
        {
            if (!vis[i] && cur>=arr[i])
            {
                vis[i]=true;
                isok = cur^arr[i] ? dfs(i-1, cur-arr[i], sz-1, arr, vis) : dfs(n-1, len, sz-1, arr, vis);
                if (isok || ! cur) return isok;
                vis[i]=false;
                while(i>0 && arr[i-1]==arr[i])
                {
                    i--;
                }
            }
        }
        return isok;
    }
};