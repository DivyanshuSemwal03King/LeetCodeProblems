#include<bits/stdc++.h>
using namespace std;

 vector<int> runningSum(vector<int>& nums) {
        vector<int> result;
       
       for(int i=0;i<nums.size();i++){
          int sum=0;
         for(int j=0;j<=i;j++){
            sum+=nums[j];
          
           



         }
           result.push_back(sum);
       
       }
       return result;
    }

    int main(){
    vector<int> nums={1,2,3,4};
    vector<int> result=runningSum(nums);
    for(int i=0;i<result.size();i++){
        cout<<result[i]<<" ";

    }
    return 0;
    }
