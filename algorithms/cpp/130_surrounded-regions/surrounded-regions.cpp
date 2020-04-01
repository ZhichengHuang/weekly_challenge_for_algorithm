class Solution {
public:
    void mark(vector<vector<char>> & board,int row,int col,int r,int c)
    {
        if(r<0 || c<0 || r>= row || c>=col || board[r][c] !='O')
            return;
        
        board[r][c]='N';
        mark(board,row,col,r+1,c);
        mark(board,row,col,r-1,c);
        mark(board,row,col,r,c+1);
        mark(board,row,col,r,c-1);
    }
    void solve(vector<vector<char>>& board) {
        if(board.size()<=0 || board[0].size()<=0)
            return;

        int row = board.size();
        int col = board[0].size();

        for(int r=0;r<row;r++)
        {
            if(board[r][0]=='O')
            {
                mark(board,row,col,r,0);
            }
            if(board[r][col-1]=='O')
            {
                mark(board,row,col,r,col-1);
            }
        }
        for (int c=1; c<col-1; c++){
            if ( board[0][c] == 'O') {
                mark(board, row, col, 0, c); 
            }
            if ( board[row-1][c] == 'O') {
                mark(board, row, col, row-1, c); 
            }
        }
        for(int r=0;r<row;r++)
        {
            for(int c=0;c<col;c++)
            {
                if(board[r][c]=='O')
                {
                    board[r][c]='X';
                }
                else if (board[r][c]=='N')
                {
                    board[r][c]='O';
                }
            }
        }

    
    }
};