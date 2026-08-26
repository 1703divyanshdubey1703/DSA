class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int n = nums.size();
        int temp = 0, maxlength = 0, countzeroes = 0, left = 0;

        for(int right = 0;right<n;right++)
        {
            if(nums[right]==0)
            {
                countzeroes++;
            }
            while(countzeroes>1)
            {
                if(nums[left]==0)
                countzeroes--;
                left++;
            }
            temp = right-left;
            maxlength = max(temp, maxlength);
        }

        if(maxlength<n+1)
        return maxlength;

        return 0;
    }
};