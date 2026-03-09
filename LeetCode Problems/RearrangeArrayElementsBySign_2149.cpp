#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> rearrangeArray(vector<int> &nums)
{
    vector<int> posInt;
    vector<int> negInt;
    vector<int> result;
    for (int i = 0; i < nums.size(); i++)
    {
        if (nums[i] < 0)
        {
            negInt.push_back(nums[i]);
        }
        else
        {
            posInt.push_back(nums[i]);
        }
    }
    for (int i = 0; i < posInt.size(); i++)
    {
        result.push_back(posInt[i]);
        result.push_back(negInt[i]);
    }
    return result;
}
