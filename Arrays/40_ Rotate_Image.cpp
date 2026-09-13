class Solution {
public:
    void rotate(vector<vector<int>>& a) {
        int rows = a.size();
        int cols = a[0].size();

        for(int i=0;i<rows;i++)
        {
            for(int j=i+1;j<cols;j++)
            {
                swap(a[j][i], a[i][j]);
            }
        }
        int left,right;

        for(int i=0;i<rows;i++)
        {
            left=0;
            right=cols-1;
        while(left<right)
        {
            swap(a[i][left], a[i][right]);
            left++;
            right--;
        }}
    }
};