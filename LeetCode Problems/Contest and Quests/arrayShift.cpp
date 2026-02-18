#include<iostream>
#include<vector>
using namespace std;

vector<int> arrayShift(vector<int>arr){
    int length = arr.size();
    int half = length / 2;
    vector<int> shiftedArr(length);
    for(int i=0;i<half;i++){
        shiftedArr[2*i]=arr[i];
        shiftedArr[2*i+1]=arr[i+half];
    }
    return shiftedArr;
}
int main(){
    vector<int> arr = {2,5,1,3,4,7};
    vector<int> result = arrayShift(arr);
    for(int i=0;i<result.size();i++){
        cout<<result[i]<<" ";
    }

    return 0;
}
