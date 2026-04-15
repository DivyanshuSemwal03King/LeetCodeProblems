#include <bits/stdc++.h>
using namespace std;

int findTheWinner(int n, int k)
{
    vector<int>arr(n);

    for(int i=0;i<n;i++){
      arr[i]=i+1;
    }
    int i=0;
    int a;
    while(arr.size()!=1){
        a=((k-1)+i)%arr.size();
        arr.erase(arr.begin()+a);
        i=a;
    }
    return arr[0];
 
}

int main(){
    int n=5;
    int k=2;
     cout<<findTheWinner(n,k);

    return 0;
}