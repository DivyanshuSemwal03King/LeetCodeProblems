#include <iostream>
#include <vector>
using namespace std;


int maxSubArray(vector<int>& nums) {
     //Kadans Algo
          int maxii = INT_MIN;
        int sum = 0;
        for(int i=0;i<nums.size();i++){
            sum+=nums[i];
            if(sum>maxii){
                maxii = sum;
            }
            if(sum<0){
                sum=0;
            }

        }
        return maxii;   
    }