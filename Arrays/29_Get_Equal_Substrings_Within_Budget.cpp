class Solution {
public:
    int equalSubstring(string s, string t, int maxCost) {
        
        int n = s.size();
        int left = 0, cost = 0, maxlength = 0,temp=0;
        for(int right = 0;right<n;right++)
        {
            cost+=abs(t[right]-s[right]);
            while(cost>maxCost)
            {
                cost-=abs(t[left]-s[left]);
                left++;
            }
            temp=right-left+1;
            maxlength = max(maxlength, temp);
        }

        return maxlength;
    }
};