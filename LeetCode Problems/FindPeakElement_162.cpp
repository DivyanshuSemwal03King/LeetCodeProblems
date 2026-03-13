#include<iostream>
#include<vector>
using namespace std;

 int findPeakElement(vector<int>& nums) {
        int left = 0;
        int right = nums.size()-1;
        
        while (left<right)
        {
            int mid = left+(right-left)/2;
            
            if(nums[mid]>nums[mid+1]){
                right=mid;
            }
            else{
                left= mid+1;
            }
        }
        return left;
        // int target = 0;
        // for(int i=1;i<nums.size();i++){
        //     if(nums[target]<nums[i]){
        //         target=i;
        //     }
        // }
        // return target;
        
    }

    int main(){
        vector<int> nums= {1,2,1,3,5,6,4};
        cout<<findPeakElement(nums);
        return 0;
    }