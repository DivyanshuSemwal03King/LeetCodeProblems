#include <iostream>
#include <vector>
#include<algorithm>
using namespace std;

long long maxTotalValue(vector<int> &nums, int k)
{
    //  sort(nums.begin(),nums.end());
    //  long long sum=0;
    //  long long maxi = INT_MIN;
    //  for(int i=0;i<k;i++){
    //     sum+=nums[nums.size()-1]-nums[0];
    //     maxi=max(sum,maxi);
    //  }
    //  return maxi;


     sort(nums.begin(), nums.end());

    return 1LL * k * (nums.back() - nums.front());
}

int main(){
    vector<int> nums={1,3,2};
    int k=2;
    cout<<maxTotalValue(nums,k);
    return 0;
}