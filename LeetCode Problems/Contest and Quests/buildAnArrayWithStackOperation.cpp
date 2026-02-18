#include<iostream>
#include<vector>
using namespace std;
#include<stack>
#include<algorithm>

vector<string> buildArray(vector<int>& target, int n) {
     
     vector<string> operations;
     int j=0; //target pointer
    for(int i=1;i<=n;i++){
        if(j==target.size()){
            break;
        }
        operations.push_back("Push");
        if(target[j]==i){
            j++;
        }
        else{
            operations.push_back("Pop");
        }
    }
    return operations;
  
    }

    int main(){
        vector<int> target={1,3};
        int n=3;
        vector<string> result=buildArray (target,n);
        cout<<"Operations: ";
        for(string op: result){
            cout<<op<<" ";
        }
        return 0;
    }