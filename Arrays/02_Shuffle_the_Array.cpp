#include <iostream>
#include <vector>
using namespace std;

vector<int> shuffleArray(vector<int> nums)
{
    int n = nums.size() / 2;
    vector<int> ans(2 * n);

    for(int i = 0; i < n; i++)
    {
        ans[2 * i] = nums[i];
        ans[2 * i + 1] = nums[i + n];
    }

    return ans;
}

int main()
{
    int size;

    cout << "Enter the size of the array (Even): ";
    cin >> size;

    vector<int> nums(size);

    cout << "Enter the elements:\n";
    for(int i = 0; i < size; i++)
    {
        cin >> nums[i];
    }

    vector<int> ans = shuffleArray(nums);

    cout << "Shuffled Array: ";
    for(int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }

    return 0;
}