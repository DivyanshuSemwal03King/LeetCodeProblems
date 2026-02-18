#include <iostream>
#include <set>
#include <vector>
#include <algorithm>
using namespace std;

bool containsDuplicate(vector<int> &nums)
{

    set<int> s;
    for (int i = 0; i < nums.size(); i++)
    {
        s.insert(nums[i]);
    }
    int l1 = nums.size();
    int l2 = s.size();
    if (l1 == l2)
    {

        return false;
    }
    return true;

    //     bool boolen = false;
    //     sort(nums.begin(), nums.end());
    //    for(int i=1;i<nums.size();i++){
    //     if(nums[i]==nums[i-1]){
    //       boolen = true;
    //       return boolen;
    //     }

    //    }
    //    return boolen;
}

int main()
{
    vector<int> nums = {1, 2, 3};
    containsDuplicate(nums);
    return 0;
}