#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int singleNumber(vector<int> &nums)
{
    sort(nums.begin(), nums.end());

    for (int i = 0; i < nums.size(); i += 2)
    {
        if (i == nums.size() - 1 || nums[i] != nums[i + 1])
        {
            return nums[i];
        }
    }
    return -1; //This question is done by little bit assist of chat Gpt.

    // Another Approch BitWise XOR operator
 
    int result = 0;
    for(int num :nums){
        result ^= num;

    }
    return result;
     
}

int main()
{
    vector<int> nums = {4, 1, 2, 1, 2};
    cout << singleNumber(nums);
    return 0;
}
