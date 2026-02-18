#include<iostream>
#include<vector>
#include<algorithm>
#include<stack>

using namespace std;

vector<int> nextSmallestElement(vector<int>nums){
    vector<int> arr(nums.size(),nums.size());
    for(int i=0;i<nums.size();i++){
        for(int j=i+1;j<nums.size();j++){
            if(nums[i]>nums[j]){
                arr[i]=j;
                break;
            }      
        }
        // if(arr[i] == 0){
        //     arr[i]=nums.size();
        // }       
    }
    return arr;  
}


vector<int> previousSmallestElement(vector<int> nums){
    vector<int> arr1(nums.size(),-1);
    for(int i=nums.size()-1;i>=0;i--){
        for(int j=i-1;j>=0;j--){
            if(nums[i]>nums[j]){
                arr1[i]=j;
                break;
            }      
        }   
    }
    return arr1;
   
}

vector<int> AreaofHistogram(vector<int> nums){
    

    vector<int> next = nextSmallestElement(nums);
    vector<int> prev = previousSmallestElement(nums);

    int maxArea = 0;
    for (int i = 0; i < nums.size(); i++) {
        int width = next[i] - prev[i] - 1;
        int area = nums[i] * width;
        maxArea = max(maxArea, area);
    }
    return {maxArea};
}

int main(){
    vector<int> nums = {2,1,5,6,2,3};
    // nextSmallestElement(nums);
    // previousSmallestElement(nums);
    vector<int> ans = AreaofHistogram(nums);
    for(int x : ans){
        cout << x << " ";
    }
    return 0;
}
