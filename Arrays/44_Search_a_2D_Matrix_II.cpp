class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int rows = matrix.size();
        int cols = matrix[0].size();

        int right = cols-1;
        int top = 0;

        while(right>=0 && top<rows)
        {
            if(matrix[top][right]==target)
            return true;

            if(target<matrix[top][right])
            {
                right--;
            }
            else
                top++;
        }

        return false;
        
    }
};