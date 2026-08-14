class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
      int n = nums.size();
      int left = 0;
      int right = 1;
      int k = 1;
      for(right=0;right<n;right++)
      {
        
        if(nums[left]!=nums[right])
        {
            left++;
            nums[left]=nums[right];
            k++;
        }
        
      }  
      return k;
    }
};