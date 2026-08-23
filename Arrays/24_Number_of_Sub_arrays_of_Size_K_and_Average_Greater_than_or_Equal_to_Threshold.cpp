class Solution {
public:
    int numOfSubarrays(vector<int>& arr, int k, int threshold) {
        int n = arr.size();
        double temp=0, average=0,j=0;
        
        for(int i=0;i<k;i++)
        {
            temp+=arr[i];
        }
        average = temp;
        if((average/k)>=threshold)
        {
           j++;
        }

        for(int i=0;i<n-k;i++)
        {
            average = temp-arr[i]+arr[k+i];
            if((average/k)>=threshold)
            j++;
            temp = average;
        }


return j;

        

        

        
    }
};