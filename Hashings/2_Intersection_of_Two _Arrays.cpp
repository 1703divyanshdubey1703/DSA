class Solution {
public:
    vector<int> intersection(vector<int>& num1, vector<int>& num2) {
        int n1 = num1.size();
        int n2 = num2.size();

        unordered_set<int> s1, s2;

        for(int i=0;i<n1;i++){
            s1.insert(num1[i]);
        }

        for(int i=0;i<n2;i++)
        {
            if(s1.count(num2[i]))
            {
                s2.insert(num2[i]);
            }
        }

        vector<int> v;

        for(int x: s2){
            v.push_back(x);
        }

        return v;
    }
};