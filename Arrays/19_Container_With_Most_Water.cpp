class Solution {
public:
    int maxArea(vector<int>& height) {

        int n = height.size();
        int left = 0;
        int right = n - 1;
        int highest = 0, maxarea = 0;
        while (left<=right) 
        {
            if(height[left]<height[right])
            {
                highest=height[left]*abs((right-left));
                left++;
            }
            else
            {
                highest=height[right]*abs((right-left));
                right--;
            }
            if(maxarea<highest)
                maxarea=highest;
                
          

        }
        return maxarea;
    }
};