#include<iostream>
#include<stack>
#include<string>
#include<algorithm>


using namespace std;

  bool isValid(string s) {
      stack <char> brackets;
      for(int i=0;i<s.size(); i++){
        if(s[i]=='(' || s[i]=='{' || s[i]=='['){
            brackets.push(s[i]);
        }
        else{
            if(brackets.empty()){
                return false;
            }
            char top = brackets.top();
            if((s[i]==')' && top=='(') || (s[i]=='}' && top=='{') || (s[i]==']' && top=='[')){
                brackets.pop();
            }
            else{
                return false;
            }
        }

       
        
      } 
      
        return brackets.empty();
        
    }
int main(){
    string s = "([)]";
    cout<<isValid(s);
    return 0;
}
