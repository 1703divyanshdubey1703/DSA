class Solution {
public:
    void gameOfLife(vector<vector<int>>& board) {
        int rows = board.size();
        int cols = board[0].size();

        for(int i=0;i<rows;i++)
        {
            for(int j=0;j<cols;j++)
            {
                int count = 0;
                for(int x=-1;x<=1;x++)
                
                    for(int y=-1;y<=1;y++)
                    {

                        if(x==0 && y==0)
                        continue;

                        int ni = i+x;
                        int nj = j+y;
                        
                        if(nj>=0 && nj<cols && ni>=0 && ni<rows)
                        if(board[ni][nj]==1 || board[ni][nj]==2)
                        {
                            count++;
                        }
                    }
                

            if(board[i][j]==1)
            {
                if(count<2 || count>3)
                {
                    board[i][j]=2;
                }
            }
            if(board[i][j]==0)
            {
                if(count==3)
                {
                    board[i][j]=3;
                }
            }
        }}

        for(int i=0;i<rows;i++)
        {
            for(int j=0;j<cols;j++)
            {
                if(board[i][j]==2)
                board[i][j]=0;

                if(board[i][j]==3)
                board[i][j]=1;
            }

        }
    }
    
};