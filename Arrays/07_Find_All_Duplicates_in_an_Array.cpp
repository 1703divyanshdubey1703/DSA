#include <iostream>
#include <vector>
using namespace std;

vector<int> findduplicates(const vector<int>& num)
{
    int n = num.size();
    vector<int> freq(n+1, 0);
    vector<int> ans;

    for(int i=0;i<n;i++)
    {
        freq[num[i]]++;
    }

    for(int i=1;i<=n;i++)
    {
        if(freq[i]>1)
        ans.push_back(i);
    }

    return ans;
}

int main()
{
    cout<<"Enter the size of the array: ";
    int n;
    cin>>n;

    vector<int> quesarr(n);
    for(int i=0;i<n;i++)
    {
        cin>>quesarr[i];
    }

    vector<int> result = findduplicates(quesarr);

    for(int i=0;i<result.size(); i++)
    {
        cout<<result[i]<<" ";
    }

return 0;
}
