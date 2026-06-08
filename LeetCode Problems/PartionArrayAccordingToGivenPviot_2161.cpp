#include<iostream>
#include<vector>
using namespace std;

 vector<int> pivotArray(vector<int>& nums, int pivot) {
       vector<int> answer;
       int i=0;
       for(int j=0;j<nums.size();j++){
        if(nums[j]<pivot){
            answer.push_back(nums[j]);
            
        }
    }
       for(int j=0;j<nums.size();j++){
        if(nums[j]==pivot){
            answer.push_back(nums[j]);
        }
       }
       for(int j=0;j<nums.size();j++){
        if(nums[j]>pivot){
            answer.push_back(nums[j]);
        }
       }
       return answer;
    }

    int main(){
        vector<int> nums={9,12,5,10,14,3,10};
        int pivot=10;
        vector<int> ans = pivotArray(nums,pivot);
        for(int i=0;i<ans.size();i++){
            cout<<ans[i]<<" ";
        }
        return 0;
    }