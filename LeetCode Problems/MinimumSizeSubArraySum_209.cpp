#include<iostream>
#include<vector>
using namespace std;
 int longestSubarray(vector<int> &nums, int k){
    int count =0;
    int minCount=INT_MAX;
    int sum =0;
    for(int i=0;i<nums.size();i++){
        for(int j=i;j<nums.size();j++){
            count+=1;
            sum+=nums[j];
            if(sum>=k){
                minCount=min(count,minCount);
                count=0;
                sum=0;
            }
        }
    }
    return minCount;
 }

 int main(){
    vector<int> nums={1,1,1,1,1};
    int k = 3;
    cout<<longestSubarray(nums,k);
    return 0;
 }
