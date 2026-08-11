#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;

vector<int> findDuplicate(vector<int>& nums) {
    unordered_map<int, int> count;
    vector<int> ans;
    for (int num : nums) {
        count[num]++;
        if (count[num] > 1) {
          ans.push_back(num);
        }
    }
    
    if(ans.empty()) return {-1};
    else return ans;
}

int main()
{
    vector<int> nums = {3,4,4,7,7,8,9};
    vector<int> ans = findDuplicate(nums);
    for(int x:ans){
        cout<<x<<" ";
    }
 return 0;
}
