"C:\Users\divya\Documents\Codes\C++\DSA\Arrays"  class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        vector<vector<int>> v(n, vector<int>(n));
        int x =1, top = 0, bottom = n-1, left = 0, right = n-1;

        while(top<=bottom && left<=right)
        {
            for(int i=left;i<=right;i++)
            {
                v[top][i]=x;
                x++;
            }
            top++;

            for(int i=top;i<=bottom;i++)
            {
                v[i][right]=x;
                x++;
            }
            right--;

            for(int i=right;i>=left;i--)
            {
                v[bottom][i]=x;
                x++;
            }
            bottom--;

            for(int i=bottom;i>=top;i--)
            {
                v[i][left]=x;
                x++;
            }
            left++;
        }

        return v;

    }
};