#include<iostream>
#include<stack>
#include<vector>
using namespace std;

vector<int> nextGreaterElement(vector<int>& nums) {
    vector<int> result(nums.size(), -1);
    stack<int> s; 

    for(int i = 0; i < nums.size(); i++){
        while(!s.empty() && nums[i] > nums[s.top()]){
            result[s.top()] = nums[i];
            s.pop();
        }
        s.push(i);
    }
    return result;
}

int main(){
    vector<int> nums = {2,10,3,5,6,7,1};
    vector<int> ans = nextGreaterElement(nums);

    for(int x : ans){
        cout << x << " ";
    }
    return 0;
}
