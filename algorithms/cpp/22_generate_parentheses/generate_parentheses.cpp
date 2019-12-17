class Solution {
public:
    vector<string> generateParenthesis(int n) {
        vector<string> results;
        string s;
        generate(results,n,n,s);
        return results;
        
        
    }
    void generate(vector<string> & results,int left,int right,string s)
    {
        if (left==0 && right ==0)
        {
            results.push_back(s);
            return;
        }
        if (left>0)
        {
            generate(results,left-1,right,s+'(');
        }
        if (right>0 && right>left)
        {
            generate(results,left,right-1,s+')');
        }
    }
};