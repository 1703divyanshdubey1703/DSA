class Solution {
public:
    vector<int> findDiagonalOrder(vector<vector<int>>& mat) {
        int rows = mat.size();
        int cols = mat[0].size();

        vector<int> v;

        for(int d=0;d<rows+cols-1;d++)
        {

            vector<int> diagnol;
            int i,j;

            if(d<cols)
            {
                i=0;
                j=d;
            }
            else
            {
                i=d-cols+1;
                j=cols-1;
            }

            while(i<rows && j>=0)
            {
                diagnol.push_back(mat[i][j]);
                i++;
                j--;
            }
            if(d%2==0)
            {
                reverse(diagnol.begin(), diagnol.end());
            }

            for(int x: diagnol)
            {
                v.push_back(x);            
            }
        }

        return v;
    }     
};