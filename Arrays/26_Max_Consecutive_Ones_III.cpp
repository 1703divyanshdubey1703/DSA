class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int left = 0,temp = 0, maxlength = 0,countzeroes =0;
        int n = nums.size();


        for(int right = 0;right<n;right++)
        {
            if(nums[right]==0)
            {
                countzeroes++;
            }

            while(countzeroes>k)
            {
                if(nums[left]==0)
                {
                    countzeroes--;
                }
                left++;
            }
            temp = right-left+1;
                maxlength = max(maxlength, temp);
        }

        return maxlength;
    }
};