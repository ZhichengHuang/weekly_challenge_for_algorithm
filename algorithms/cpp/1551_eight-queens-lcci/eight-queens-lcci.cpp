class Solution {
public:
    bool valid(vector<int> & queen_pos,int row,int col)
    {
        for(int i=0; i< queen_pos.size(); ++i)
        {
            if((i==row)|| col==queen_pos[i] || row+col==i+queen_pos[i] || row+queen_pos[i]==col+i)
            {
                return false;
            }
        }
        return true;
    }
    void inner(int n,int index_i,vector<int>& queen_pos,vector<string>& ans,vector<vector<string>> & res)
    {
        if (n==index_i)
        {
            res.push_back(ans);
            return;
        }
        for(int j=0;j<n;++j)
        {
            if(valid(queen_pos,index_i,j))
            {
                ans[index_i][j]='Q';
                queen_pos.push_back(j);
                inner(n,index_i+1,queen_pos,ans,res);
                queen_pos.pop_back();
                ans[index_i][j]='.';
            }
        }
    }
    vector<vector<string>> solveNQueens(int n) {
        vector<int> queen_pos;
        vector<string> ans(n,string(n,'.'));
        vector<vector<string>> res;

        inner(n,0,queen_pos,ans,res);
        return res;

    }
};