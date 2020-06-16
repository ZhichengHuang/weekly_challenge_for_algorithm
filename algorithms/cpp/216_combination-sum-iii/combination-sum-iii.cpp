class Solution {
public:
    vector<vector<int>> res;
    vector<int> buffer;
    vector<vector<int>> combinationSum3(int k, int n) {
        buffer = vector<int> (k,0);
        dfs(k,n);
        return res;

    }
    void dfs(int k,int n,int index=0)
    {
        if(k==0)
        {
            if(n==0)
                res.push_back(buffer);
            return;
        }
        int st = index==0? 1:buffer[index-1]+1;
        st = max(st,n-(20-k)*(k-1)/2);
        int end = min(9,1+(n-k*(k+1)/2)/k);
        for(int i=st;i<=end;i++)
        {
            buffer[index]=i;
            dfs(k-1,n-i,index+1);
        }
    }
};