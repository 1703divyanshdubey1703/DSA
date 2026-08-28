class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {

        int n = nums.size();
        int left = 0;
        int right = n-1;
        vector<int> pos = {-1,-1};

        while(left<=right)
        {
            int mid = (left+right)/2;
            if(nums[mid]==target)
            {
                pos[0]=mid;
                right = mid-1;
            }
            else if(nums[mid]<target)
            {
                left = mid+1;
            }
            else 
                right = mid-1;
        }

        left = 0;
        right = n-1;


        while(left<=right)
        {
           int mid = (left+right)/2;
            if(nums[mid]==target)
            {
                pos[1]=mid;
                left=mid+1;
            }
            else if(nums[mid]<target)
            {
                left = mid+1;
            }
            else 
                right = mid-1;
        }
        return pos;
    }
};