class Solution {
public:
    vector<vector<int>> allCellsDistOrder(int R, int C, int r0, int c0) {
        vector<vector<int>> results(R*C,vector<int>(3));
        int index=0;
        for(int i=0;i<R;i++)
        {
            for(int j=0;j<C;++j)
            {
                results[index][0]=i;
                results[index][1]=j;
                results[index][2]=abs(i-r0)+abs(j-c0);
                index+=1;
            }
        }
        sort(results.begin(), results.end(), 
        [&](vector<int> a, vector<int> b) {return a[2] < b[2]; });
        for(int i=0;i<index;i++)
        {
            results[i].pop_back();
        }
        return results;
    }
};