class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int n = nums.size();
        int l  = 0, sum = 0, minlength = n+1,temp;

        for(int i=0;i<n;i++)
        {
            if(nums[i]==target)
            return 1;
        }

        for(int r=0;r<n;r++)
        {
            sum+=nums[r];
            while(sum>=target)
            {
                temp = r-l+1;
                sum-=nums[l];
                l++;
                minlength = min(minlength, temp);
            }
        }

        if(minlength<(n+1))
        return minlength;

        return 0;

        
    }
};