#include <bits/stdc++.h>
using namespace std;

//   int distributeCandies(vector<int>& candyType) {
//        unordered_map<int,int> mp;
//         int eat=0;
//         int maxEat=candyType.size()/2;
//         for(int i=0;i<candyType.size();i++){
//             mp[candyType[i]]++;
//         }
//         for(auto it:mp){
//             if(maxEat!=eat){
//                 eat+=1;
//             }
            
//         }
//         return eat;
//     }
 int distributeCandies(vector<int>& candyType) {
    int maxCandy = candyType.size()/2;
    set<int> s(candyType.begin(),candyType.end());
    int sEat = s.size();
    int eat= min(sEat,maxCandy);
    return eat;

 }

    int main(){
        vector<int> c ={6,6,6,6,6,6};
        cout<<distributeCandies(c);
        return 0;
    }