#include<iostream>
#include<vector>
using namespace std;

int findMaxConsecutiveOnes(vector<int>& nums) {
    int currentCount = 0;
    int maxCount = 0;

    for (int i = 0; i < nums.size(); i++) {
        if (nums[i] == 1) {
            currentCount++;
            maxCount = max(maxCount, currentCount);
        } else {
            currentCount = 0;
        }
    }

    return maxCount;
}  

 
int main(){
    vector<int> nums = {1,1,0,1,1,1};
    int result = findMaxConsecutiveOnes(nums);
    cout<<result;
    return 0;
}
