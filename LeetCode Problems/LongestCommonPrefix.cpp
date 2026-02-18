#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
using namespace std;

string longestCommonPrefix( vector<string> & strs){

 sort(strs.begin(), strs.end());
  int end = strs.size()-1;
  string str1 = strs[0];
  string str2 = strs[end];
  int leng = 0;
 
  for(int i = 0;i<str1.size();i++){
    if(str1[i]==str2[i]){
       leng ++; 
    }
    else {
           break; 
    }
  }
  string str = str1.substr(0,leng);
 
  return str;

   
}

int main(){
    vector<string> strs = {"flower","flow","flight"};
    cout<<longestCommonPrefix(strs);
    return 0;
}