#include <iostream>
#include <vector>

using namespace std;

bool uniformArray(vector<int> &nums1)
{ // Wrong Approach
//     vector<int> nums2(nums1.size());
//     bool oddFlag = true;
//     if(nums1[0]%2==0) {

//          oddFlag = false;
//     }

//     for(int i=1;i<nums1.size();i++){
//         if(oddFlag==true){
//             if(nums1[i]%2==0){
//                 nums2[i]=nums1[i]-nums2[i-1];
//             }
//             nums2[i]=nums1[i];
//         }
//         else if(oddFlag==false){
//             if(nums1[i]%2!=0) return false;
//             nums2[i]=nums1[i];
//         }

//     }
//     return true;



//This is the correct approach

    int minOdd = INT_MAX;
    for(int nums:nums1){
       if(nums%2!=0){
         minOdd = min(minOdd,nums);
       }
    }

    for(int nums : nums1){
        if(nums%2==0 && minOdd != INT_MAX && minOdd > nums){
            return false;
        }
    }

    return true;
}

int main(){
    vector<int> nums1 = {2,3};
    cout<<uniformArray(nums1);
}