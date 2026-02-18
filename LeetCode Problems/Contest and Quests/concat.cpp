#include<iostream>
using namespace std;
#include<vector>
vector<int> concat(vector<int>& nums){
    int n =nums.size();
    vector<int> ans(2*n);
    
    for(int i=0; i<n; i++){
        ans[i] = nums[i];
        ans[i+n] = nums[i];
    }
    return ans;
}

int main(){
    vector<int> nums = {1,2,3};
    vector<int> result = concat(nums);
    for(int i=0; i<result.size(); i++){
        cout<<result[i]<<" ";
    }
    

    return 0;
}