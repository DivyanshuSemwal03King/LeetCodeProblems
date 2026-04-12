#include<bits/stdc++.h>
using namespace std;

 string truncateSentence(string s, int k) {
        int pointer = 0;
        string str ="";
        for(int i=0;i<s.size();i++){
          
          if(s[i]==' '){
             pointer++;
          }
           if(pointer==k){
            break;
           }
            str+=s[i];
        }
        return str;
    }

    int main(){
        string s = "What is the solution to this problem";
        int k =4;
        cout<<truncateSentence(s,k);
        return 0;
    }