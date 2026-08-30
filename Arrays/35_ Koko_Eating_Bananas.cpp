class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
       int n = piles.size();
       int highest = *max_element(piles.begin(), piles.end());
       int left = 1;
       int right = highest;
        int hours;
       while(left<=right)
       {    int mid = (left+right)/2;
            hours=0;
            for(int i=0;i<n;i++)
            {
                hours += piles[i]/mid;
                if(piles[i]%mid!=0)
                hours++;
            }
            if(hours>h)
            left = mid+1;
            else 
            right = mid-1;
       } 

       return left;
    }
};