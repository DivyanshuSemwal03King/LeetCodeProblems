#include <iostream>
#include <vector>
#include<algorithm>
using namespace std;

class Solution
{
public:
    int minimumDeletions(vector<int> &nums)
    {
       int minPos = -1,maxPos =-1;
       int maxi = INT_MIN;
       int mini = INT_MAX;
       for(int i=0;i<nums.size();i++){
           if(nums[i]<mini){
            mini = nums[i];
            minPos=i;
           }
           if(nums[i]>maxi){
            maxi=nums[i];
            maxPos=i;
           }
       }
      
       // only from the front
       int frontDel =max(minPos, maxPos) + 1;
       //only from the back
       int backDel = nums.size() - min(minPos,maxPos);

       //minimum from front and maximum from back;
       int minFrontMaxBack = (minPos+1)+(nums.size()-maxPos);
        // maximum from the front and minimum from the back;

        int maxFrontMinBack = (maxPos+1)+(nums.size()-minPos);

        return min({frontDel,backDel,minFrontMaxBack,maxFrontMinBack});
      
    

    }
};

int main(){
    Solution s;
    vector<int> nums = {2,10,7,5,4,1,8,6};
    cout<<s.minimumDeletions(nums);
}