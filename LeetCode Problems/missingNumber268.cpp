#include <iostream>
#include <vector>
using namespace std;

int missingNumber(vector<int> &nums)
{
    int n = nums.size();
    vector<bool> isPresent(n+1,false);
    for(int i=0;i<nums.size();i++){
        isPresent[nums[i]] = true;
    }
    for(int i=0;i<isPresent.size();i++){
        if(!isPresent[i]){
            return i;
        }
    }
    return 0;
}

int main(){
    vector<int> arr={3,0,1};
    cout<<missingNumber(arr)<<endl;
    return 0;
}


