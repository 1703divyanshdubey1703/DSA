class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int n = nums.size();
        double maxsum=0, temp=0;
        for(int i=0;i<k;i++)
        {
            temp+=nums[i];
        }
        maxsum = temp;

        for(int i=0;i<n-k;i++)
        {
            double windowsum = temp - nums[i]  + nums[k+i];
            temp=windowsum;
            maxsum = max(windowsum, maxsum);
        }
       

        return maxsum/k;
    }
};