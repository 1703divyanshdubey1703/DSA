#include <iostream>
#include <vector>
using namespace std;

int missingnumber(const vector<int>& num)
{
    int n=num.size();

    //frequency array
    vector<int> freq(n+1, 0);
    for(int i=0;i<n;i++)
    {
        freq[num[i]]++;
    }

    for(int i=0;i<=n;i++)
    {
        if(freq[i]==0)
        return i;
    }

    return -1;
    
}

int main()
{
    cout<<"Enter the size of the array: ";
    int n;
    cin>>n;
    vector<int> arr(n);

    //input of elements
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
     
    int result = missingnumber(arr);

    cout<<result;

    return 0;
}
