#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int majorityElement(vector<int> &nums)
{

    int occur = 1;
    int maxOccur = 1;
    int occurance = nums[0];

    sort(nums.begin(), nums.end());

    for (int i = 1; i < nums.size(); i++)
    {
        if (nums[i] == nums[i - 1])
        {
            occur++;
        }
        else
        {
            occur = 1;
        }

        if (occur > maxOccur)
        {
            maxOccur = occur;
            occurance = nums[i];
        }
    }

    return occurance; //The logic of this question is created by me but i got some run time issues so i assist from the ai

    // int candidate = 0;
    // int count = 0;

    // for (int num : nums)
    // {
    //     if (count == 0)
    //         candidate = num;

    //     if (num == candidate)
    //         count++;
    //     else
    //         count--;
    // }

    // return candidate;
}

int main(){
    vector<int> nums = {2, 2, 1, 1, 1, 2, 2};
    cout << majorityElement(nums);
    return 0;
}