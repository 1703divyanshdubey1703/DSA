class Solution {
public:
    int findMiddleIndex(vector<int>& nums) {
        int n = nums.size();
        vector<int> prefix(n);
        prefix[0]=nums[0];
        for(int i=1;i<n;i++)
        {
            prefix[i]=prefix[i-1]+nums[i];
        }

        for(int i=0;i<n;i++)
        {
            if(i==0)
            {
                if((prefix[n-1]-prefix[0])==0)
                return 0;
            }
            
         

            else if((prefix[i-1]-(prefix[n-1]-prefix[i]))==0)
                return i;
        }

        return -1;

    

        
    }
};