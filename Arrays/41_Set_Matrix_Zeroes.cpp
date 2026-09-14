class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int rows = matrix.size();
        int cols = matrix[0].size();

        vector<int> zerorows, zerocols;
        for(int i=0;i<rows;i++)
        {
            for(int j=0;j<cols;j++)
            {
                if(matrix[i][j]==0)
                {
                    zerorows.push_back(i);
                    zerocols.push_back(j);
                }
            }
        }

        int a = zerorows.size();
        int b = zerocols.size();
        int i=0;

        while(i<a)
        {
            for(int j=0;j<cols;j++)
            {
                matrix[zerorows[i]][j]=0;
            }
            i++;
        }

        i=0;

        while(i<b)
        {
            for(int j=0;j<rows;j++)
            {
                matrix[j][zerocols[i]]=0;
            }
            i++;
        }
    }
};