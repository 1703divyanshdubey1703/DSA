class Solution {
public:
    vector<int> corpFlightBookings(vector<vector<int>>& bookings, int n) {
        int rows = bookings.size();
        vector<int> diff(n+2,0);

        vector<int> arr(n);
        for(int i=0;i<rows;i++)
        {
            int l = bookings[i][0];
            int r = bookings[i][1];
            int var = bookings[i][2];

            diff[l]+=var;
            diff[r+1]-=var;
        }
            for(int i=1;i<=n;i++)
            {
                diff[i]+=diff[i-1];
            }

            for(int i=0;i<n;i++)
            {
                arr[i]+=diff[i+1];
            }
        

        return arr;
 
    }
};