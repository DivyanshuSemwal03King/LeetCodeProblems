#include<iostream>
#include<string>
#include <algorithm>
using namespace std;

   string processStr(string s) {
        string result = "";
        for(int i=0;i<s.size();i++){
            char temp = s[i];
         
            switch (temp)
            {
            case '#':
                  if(!result.empty())
                    result+=result;
                break;
            case '%':
                   reverse(result.begin(),result.end());
                   break;
            case '*':
                  if(!result.empty())
                    result.pop_back();
                   break;
            
            default:
                result+=temp;
                break;
            }
        }
        return result;

    }

    int main(){
        string s = "p##";
        cout<<processStr(s);
        return 0;
    }