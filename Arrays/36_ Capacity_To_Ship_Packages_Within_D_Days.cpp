class Solution {
public:
    int shipWithinDays(vector<int>& weights, int days) {
        int n = weights.size();
        int left = *max_element(weights.begin(), weights.end());
        int right = 0;
        for(int x : weights)
        {
            right+=x;
        }
        int temp=1, sum=0;

        while(left<right)
        {
            int mid = (left+right)/2;
            sum=0;temp=1;
            for(int i=0;i<n;i++)
            {
                if(sum+weights[i]<=mid)
                {
                    sum+=weights[i];
                }
                else 
                {
                    temp++;
                    sum=weights[i];
                }
            }

            if(temp>days)
                left = mid+1;
            else 
                right = mid;
        }
        return left;
    }
};