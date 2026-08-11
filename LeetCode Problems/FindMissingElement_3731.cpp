#include <iostream>
#include <vector>
#include<algorithm>
#include <unordered_map>

using namespace std;

vector<int> findMissingElements(vector<int> &nums)
{
    sort(nums.begin(),nums.end());
    unordered_map<int,bool> mp;

    for(int x:nums){
        mp[x] = true;
    }

    vector<int> ans;
    for(int i=1;i<nums.back();i++){
        if(mp[i]==false) ans.push_back(i);
    }

   

    return ans;

}

int main(){
    vector<int> arr = {1,2,4,5};
    vector<int> ans = findMissingElements(arr);
    for(int x : ans){
        cout<<x <<" ";
    }
}