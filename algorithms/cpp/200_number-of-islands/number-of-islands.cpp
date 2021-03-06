class Solution {
public:
    void mark(vector<vector<char>> & grid,int r,int c)
    {
        if(r<0 || r>=grid.size()|| c<0 || c>=grid[0].size()|| grid[r][c] !='1')
        {
            return;
        }
        grid[r][c]='M';
        mark(grid,r,c+1);
        mark(grid,r,c-1);
        mark(grid,r-1,c);
        mark(grid,r+1,c);
    }
    int numIslands(vector<vector<char>>& grid) {
        int result = 0;
        for(int r=0;r<grid.size();r++)
        {
            for(int c=0;c<grid[r].size();c++)
            {
                if (grid[r][c]=='1')
                {
                    result++;
                    mark(grid,r,c);
                }
            }
        }
        return result;

    }
};