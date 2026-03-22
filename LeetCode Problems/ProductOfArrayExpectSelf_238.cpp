#include <bits/stdc++.h>
using namespace std;

vector<int> productExceptSelf(vector<int> &nums)
{
    // Brute Force 

    //  int n = nums.size();
    // vector<int> result(n, 1);

    // for(int i = 0; i < n; i++){
    //     int product = 1;
    //     for(int j = 0; j < n; j++){
    //         if(i != j){
    //             product *= nums[j];
    //         }
    //     }
    //     result[i] = product;
    // }
    // return result;

    // Optimal Approch

    int n = nums.size();
    vector<int> result(n,1);
    
    int prefix = 1;
    for(int i = 0;i<n;i++){
        result[i]=prefix;
        prefix*=nums[i];
    }
    int suffix = 1;
    for(int i=n-1;i>=0;i--){
        result[i]*=suffix;
        suffix*=nums[i];
    }
    return result;
}

int main()
{
    vector<int> nums = {1, 2, 3, 4};
    vector<int> ans = productExceptSelf(nums);
    for (int x : ans)
    {
        cout << x << " ";
    }
    return 0;
}