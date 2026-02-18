#include<iostream>
#include<vector>
using namespace std;

vector<int> smallerNumbersThanCurrent(vector<int>& nums){

 vector<int> result;
 for(int i=0;i<nums.size();i++){
    int count = 0;
    for(int j=0;j<nums.size();j++){
        if(j!=i&& nums[j]<nums[i]){
            count++;
        }
        
    }
    result.push_back(count);

 }
    return result;
}

int main(){
    vector<int> nums = {8,1,2,2,3};
    vector<int> result = smallerNumbersThanCurrent(nums);
    cout<<"Result: ";
    for(int i=0;i<result.size();i++){
        cout<<result[i]<<" ";
    }
    return 0;
}