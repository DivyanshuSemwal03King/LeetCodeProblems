#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>

using namespace std;

vector<int> arrayRankTransform(vector<int> &arr)
{
    vector<int> temp = arr;
    unordered_map<int, int> mp;
    vector<int> ans;
   
    sort(temp.begin(), temp.end());
    
    int rank = 1;
    
    for(int x:temp){
        if(mp.find(x)==mp.end()){
           mp[x] = rank++;
        }
       
    }
    for(int x:arr){
        ans.push_back(mp[x]);
    }
    return ans;
}

int main(){
    vector<int> arr = {40,10,20,30};

    vector<int> temp = arrayRankTransform(arr);

    for(int x : temp){
        cout<< x<<" ";
    }
    return 0;
}