class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int n = nums.size();
        unordered_set<int> s;
        for(int x : nums)
            s.insert(x);

            int maxlength = 0;

        for(int x : s){
            if(!s.count(x-1)){
                int length = 1;
                while(s.count(x+length)){
                    length++;
                }

                maxlength = max(maxlength, length);
            }
        }

        return maxlength;   
        }
};