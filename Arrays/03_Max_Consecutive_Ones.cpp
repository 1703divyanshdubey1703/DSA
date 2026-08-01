
#include <iostream>
#include <vector>
using namespace std;

int binary(vector<int> num)
{
    int n = num.size();
    int h=0,s=0;
    for(int i=0;i<n;i++)
    {
        if(num[i]==1)
        {
        h++;
        if(h>=s)
        s=h;
        }
        else
        h=0;
        
    }

        return s;
}

int main()
{
    cout<<"Enter the size of the array: ";
    int n;
    cin>>n;
    vector<int> input(n);
    
    cout<<"Enter the elements of the array{0 & 1}: \n";
    for(int i=0;i<n;i++)
    {
        cin>>input[i];
    }

    int answer = binary(input);

    cout<<"The max number of consecutive 1s are: "<<answer;

return 0;
}