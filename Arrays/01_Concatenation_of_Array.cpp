#include <iostream>
#include <vector>
using namespace std;

vector<int> getConcatenation(vector<int> nums)
{
    int n = nums.size();
    vector<int> ans(2 * n);

    for(int i = 0; i < n; i++)
    {
        ans[i] = nums[i];
        ans[i + n] = nums[i];
    }

    return ans;
}

int main()
{
    int n;

    cout << "Enter the size of the array: ";
    cin >> n;

    vector<int> nums(n);

    cout << "Enter the elements:\n";
    for(int i = 0; i < n; i++)
    {
        cin >> nums[i];
    }

    vector<int> ans = getConcatenation(nums);

    cout << "Concatenated Array: ";
    for(int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }

    return 0;
}