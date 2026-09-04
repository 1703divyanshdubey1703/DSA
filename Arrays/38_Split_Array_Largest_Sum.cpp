class Solution {
public:
    int splitArray(vector<int>& nums, int k) {
    
int n = nums.size();
        int left = *max_element(nums.begin(), nums.end());
        int right = 0;

        for(int x : nums)
        {
            right+=x;
        }

        int subarrays = 1;
        int sum = 0;

        while(left<right)
        {
            sum = 0, subarrays=1;
            int mid = (left+right)/2;
            for(int i=0;i<n;i++)
            {
            if(sum+nums[i]<=mid)
            sum+=nums[i];
            else
            {
                subarrays++;
                sum=nums[i];
            }
            }
            if(subarrays>k)
            {
                left = mid+1;
            }
            else 
                right = mid;
        }
        return left;
    }
};