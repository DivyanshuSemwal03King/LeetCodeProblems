#include<iostream>
#include<vector>
using namespace std;

vector<int> moveZeroes(vector<int>& nums){
    for(int i=0;i<nums.size();i++){
        if(nums[i]==0){
            for(int j=i+1;j<nums.size();j++){
                if(nums[j]!=0){
                    int temp = nums[j];
                     nums[j]= nums[i];
                     nums[i]= temp;
                     break ;
                }
            }
        }
       
    }

 
}

void moveZeroesOptimal(vector<int>& nums) {
    int index = 0;

    for (int i = 0; i < nums.size(); i++) {
        if (nums[i] != 0) {
            nums[index++] = nums[i];
        }
    }

    while (index < nums.size()) {
        nums[index++] = 0;
        
    }
 
}

int main(){
   vector<int> nums = {0,1,0,3,12};
//    moveZeroes(nums);
    moveZeroesOptimal(nums);
   return 0;
}