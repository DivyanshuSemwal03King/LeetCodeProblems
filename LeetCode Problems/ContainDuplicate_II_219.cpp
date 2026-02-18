#include<iostream>
#include<vector>
#include<algorithm>
#include<unordered_map>
using namespace std;

bool containsNearbyDuplicate(vector<int> &nums, int k)
{
    // for(int i=0;i<nums.size();i++){
    //     for(int j=i+1;j<nums.size();j++){
    //         if(nums[i]==nums[j]&& abs(i-j)<=k){
               
    //             return true;
    //         }
    //     }
    // }
    //     return false;   //This solution is created by me but i got some run time issues so i assist from the ai

    unordered_map<int, int> mp;

    for (int i = 0; i < nums.size(); i++)
    {
        if (mp.count(nums[i]) && i - mp[nums[i]] <= k)
            return true;

        mp[nums[i]] = i;
    }
    return false;
}

int main(){
    vector<int> nums = {1,2,3,1};
    int k = 3;
    containsNearbyDuplicate(nums,k);
    return 0;
}