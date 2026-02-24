#include<iostream>
#include<vector>
#include<set>
#include<algorithm>
using namespace std;

 vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        set<int> s;
        for(int i=0;i<nums2.size();i++){
            for(int j=0;j<nums1.size();j++){
                if(nums2[i]==nums1[j]){
                    s.insert(nums2[i]);
                }
            }
        }
        return vector<int>(s.begin(),s.end());
    }

int main(){
    vector<int> arr1={1,2,2,1};
    vector<int> arr2={2,2};
    vector<int> ans=intersection(arr1,arr2);
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }   
    return 0;
}