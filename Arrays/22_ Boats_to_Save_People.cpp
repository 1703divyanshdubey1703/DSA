class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {
        int n = people.size();
        int lim = limit;
        int rescue=0;
        int left = 0, right = n-1;

        sort(people.begin(), people.end());

        while(left<=right)
        {
            if((people[left]+people[right])<=lim)
            {
                rescue++;
                left++;
                right--;
            }
            else
            {
                if(people[right]<=lim)
                {
                    rescue++;
                    right--;
                }
            }
            
        }

        
return rescue;

    }
};