#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void rotate(vector<int> &nums, int k)
{

    reverse(nums.begin(), nums.end());
    reverse(nums.begin(), nums.begin() + k);
    reverse(nums.begin() + k, nums.end());
}

int main()
{
    vector<int> arr = {1, 2, 3, 4, 5, 6, 7};
    int k = 3;
    rotate(arr, k);
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}
