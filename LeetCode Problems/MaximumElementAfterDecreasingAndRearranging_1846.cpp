#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int maximumElementAfterDecrementingAndRearranging(vector<int> &arr)
{
    sort(arr.begin(),arr.end());

    arr[0] = 1;
    int maxElement = arr[0];

    for(int i =1;i<arr.size();i++){
        if(abs(arr[i]>arr[i-1]+1)){

           arr[i]=arr[i-1]+1;
        }
       maxElement=max(maxElement,arr[i]);
    }
    return maxElement;
}

int main(){
    vector<int> arr = {100,1,1000};
    cout<<maximumElementAfterDecrementingAndRearranging(arr);
    return 0;
}