class Solution {
public:
    vector<string> res;
    vector<string> permutation(string S) {
        string s;
        int n = S.size();
        sort(S.begin(),S.end());
        vector<int> flag(n);
        process(S,s,n,flag);
        return res;

    }

    void process(string S, string& s,int n, vector<int> &flag)
    {
        if (s.size()==S.size())
        {
            res.push_back(s);
        }
        else
        {
            for(int i=0;i<n;i++)
            {
                if(flag[i]==0)
                {
                    if(i>0 && S[i]==S[i-1] && flag[i-1]==1)
                        continue;
                    s+=S[i];
                    flag[i]=1;
                    process(S,s,n,flag);
                    s.pop_back();
                    flag[i]=0;
                }
            }
        }
    }
};