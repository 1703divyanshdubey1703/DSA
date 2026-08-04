#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> arr(const vector<int>  num)
{
    int duplicate,missing;
    int n=num.size();

    //frequency array
    vector<int> freq(n+1, 0);
    
    //frequency loop
    for(int i=0;i<n;i++)
    {
        freq[num[i]]++;
    }
    
    //answer array
    vector<int> ans(2);
    for(int i=1;i<=n;i++)
    {
        if(freq[i]==2)
        {
            duplicate = i;
            ans[0]=i;
        }

        if(freq[i]==0)
        {
            missing=i;
            ans[1]=i;
        }

    }

        sort(ans.begin(), ans.end());

        return ans;
}

int main()
{
    cout<<"Enter the size of the array: ";
    int n;
    cin>>n;

    //vector1 declaration
    vector<int> questionarr(n);

    //input of elements 
    for(int i=0;i<n;i++)
    {
        cin>>questionarr[i];
    }

    vector<int> result = arr(questionarr);

    for(int i=0;i<2;i++)
    {
        cout<<result[i]<<" ";
    }

}