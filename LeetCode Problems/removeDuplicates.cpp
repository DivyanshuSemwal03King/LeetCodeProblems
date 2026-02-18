#include<iostream>
#include<vector>
using namespace std;

//   int removeDuplicates(vector<int>& nums) {
//    if (nums.size() == 0) return 0;

//     int i = 0;
//     int j = 1;

//     while (j < nums.size()) {
//         if (nums[i] != nums[j]) {
//             i++;
//             nums[i] = nums[j];
//         }
//         j++;
//     }

//     for (int k = 0; k <= i; k++) {
//         cout << nums[k] << " ";
//     }
//     cout << endl;

//     return i + 1;

// }

 int removeDuplicates(vector<int>& nums) {
    int i =0;
    for(int j=1;j<nums.size();j++){
       
        if(nums[i]!=nums[j]){
            i++;
            nums[i]= nums[j];
        
        }
    }

    return i+1;
 }
 int main(){
    vector<int> nums = {1,1,2};
    removeDuplicates(nums);
    return 0;
 }