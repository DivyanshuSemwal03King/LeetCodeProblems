#include <iostream>
#include <vector>
using namespace std;

void nextPermutation(vector<int> &nums)
{
    int pviot = 0;
    for (int i = nums.size(); i >= 0; i++)
    {
        if (nums[i] < nums[i + 1])
        {
            pviot = i;
        }
    }
    for (int j = nums.size() - 1; j > pviot; j--)
    {
        if (nums[j] > nums[pviot])
        {
            int temp = nums[j];
            nums[j] = nums[pviot];
            nums[pviot] = temp;
            break;
        }
    }
}
