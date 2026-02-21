#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

string removeOuterParentheses(string s)
{
    string result = "";
    int depth = 0;
  
    for (char c : s)
    {
       
      
       if(c=='('){
        if(depth>0){
         result.push_back(c);
        }
        depth++;
       }
       
       else{
        depth--;
        if(depth>0){
         result.push_back(c);
        }
       }


    }
  return result;
}

int main()
{
    string s = "(()())(())";
    cout<<removeOuterParentheses(s);
    return 0;
}