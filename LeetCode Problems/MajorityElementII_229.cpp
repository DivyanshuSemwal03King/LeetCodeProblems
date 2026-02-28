#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_map>
using namespace std;

vector<int> majorityElement(vector<int> &nums)
{
    unordered_map<int, int> mp;
    for (int i = 0; i < nums.size(); i++)
    {
        mp[nums[i]]++;
    }
    vector<int> ans;
    for (auto it : mp)
    {
        if (it.second > nums.size() / 3)
        {
            ans.push_back(it.first);
        }
    }
   return ans;
}

int main()
{
    vector<int> nums = {3, 2, 3, 4, 2, 3};
    vector<int> ans = majorityElement(nums);
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }

    return 0;
}