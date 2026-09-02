class Solution {
public:
    int smallestDivisor(vector<int>& nums, int threshold) {
        int n = nums.size();
        int left = 1;
        int right = *max_element(nums.begin(), nums.end());
        int tempthreshold;
        while(left<right)
        {
            int mid = (left+right)/2;
            tempthreshold=0;
            for(int i=0;i<n;i++)
            {
                tempthreshold+=nums[i]/mid;
                if(nums[i]%mid!=0)
                tempthreshold++;
            }
            if(tempthreshold>threshold)
            {
                left = mid+1;
            }
            else 
                right = mid;
        }

        return left;
    }
};