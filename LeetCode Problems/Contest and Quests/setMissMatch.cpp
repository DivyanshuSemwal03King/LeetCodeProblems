#include<iostream>
#include<vector>
#include <algorithm>

using namespace std;

vector<int> setMissMatch(vector<int>& nums) {

    sort(nums.begin(), nums.end());
    int duplicate = -1;
    int missing = -1;
    for(int i=1;i<nums.size();i++){
        if(nums[i]==nums[i-1]){
            duplicate = nums[i];
        }
        else if(nums[i]!=nums[i-1]+1){
            missing = nums[i-1]+1;
        }
    
    }
    if(missing == -1){
          if (nums[0] != 1) {
            missing = 1;
        } else {
            missing = nums.size();
        }
    }
    return {duplicate, missing};
}

int main(){
    vector<int> nums = {1,2,3,3};
    vector<int> result = setMissMatch(nums);
    cout<<"Duplicate: "<<result[0]<<" Missing: "<<result[1];
    return 0;
}
