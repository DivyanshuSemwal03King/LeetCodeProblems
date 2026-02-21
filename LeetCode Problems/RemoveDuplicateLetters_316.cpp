#include<iostream>
#include<string>
#include<stack>
#include<vector>
#include<algorithm>

using namespace std;

string removeDuplicateLetters(string s)
{
   string result = "";
    vector<int> Freq(26, 0);
    vector<bool> visited(26, false);
    stack<char> st;

    for(char c:s){
        Freq[c-'a']++;
    
    }
   for(char c:s){
    Freq[c-'a']--;
    if(visited[c-'a']) continue;
    while(!st.empty()&& c<st.top()&& Freq[st.top()-'a']>0){
        visited[st.top()-'a']=false;
        st.pop();
    }
    st.push(c);
    visited[c-'a']=true;
   }
   while(!st.empty()){
    result.push_back(st.top());
    st.pop();
   }
   reverse(result.begin(),result.end());
   return result;
}

int main()
{
    string s = "cbacdcbc";
    cout<<removeDuplicateLetters(s);
    return 0;
}