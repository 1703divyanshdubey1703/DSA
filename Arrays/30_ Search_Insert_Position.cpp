class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int n = nums.size();
        sort(nums.begin(), nums.end());
        int temp;
        int left = 0;  
        int right = n-1;
        while(left<=right)
        {
            int mid = (left+right)/2;
            if(nums[mid]==target)
            return mid;
            else if(nums[mid]<target)
            left=mid+1;
            else
            right=mid-1;
            
            temp=mid;
        }

        if(nums[temp]<target)
        return temp+1;
        else
        return temp;
    }
};