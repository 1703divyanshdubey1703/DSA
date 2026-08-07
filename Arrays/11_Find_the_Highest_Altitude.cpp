class Solution {
public:
    int largestAltitude(vector<int>& nums) {
        int n = nums.size();
        vector<int> prefix(n);
        prefix[0]=nums[0];
        for(int i=1;i<n;i++)
        {
            prefix[i]=prefix[i-1]+nums[i];
        }

        int highest=0;
        for(int i=0;i<n;i++)
        {
            if(prefix[i]>=highest)
            {
                highest=prefix[i];
            }
        
        }

        if(highest>0)
        {
            return highest;
        }
        else
        return 0;
        
    }
};