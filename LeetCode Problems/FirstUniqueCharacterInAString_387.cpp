#include<bits/stdc++.h>

using namespace std;

 int firstUniqChar(string s) {
        map<char,int> mp;
        for(char c:s){
            mp[c]++;
        }
        for(int i=0;i<s.size();i++){
            if(mp[s[i]]==1){
                return i;
            }
        }
        return -1;
    }

    int main(){
        string s = "leetcode";
        cout<<firstUniqChar(s);
        return 0;
    }