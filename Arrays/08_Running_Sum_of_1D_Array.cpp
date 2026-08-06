#include <iostream>
#include <vector>
using namespace std;

int main()
{
    cout<<"Enter the size: ";
    int n;
    cin>>n;

    cout<<"Enter the elements: ";
    vector<int> arr(n);
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    cout<<"Prefix array\n";
    vector<int> prefix(n);
    prefix[0]=arr[0];


    for(int i=1;i<n;i++)
    {
        prefix[i]=prefix[i-1]+arr[i];
    }

    for(int i=0;i<n;i++)
    {
        cout<<prefix[i]<<" ";
    }
    return 0;

}