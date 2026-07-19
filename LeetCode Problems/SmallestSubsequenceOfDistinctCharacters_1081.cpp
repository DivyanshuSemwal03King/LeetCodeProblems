#include <iostream>
#include <vector>
#include <algorithm>
#include <stack>
#include <unordered_map>
#include <unordered_set>

using namespace std;

string smallestSubsequence(string s)
{
    stack<char> st;
    unordered_set<char> inStack;
    unordered_map<char, int> lastIndex;

    string answer = "";

    for (int i = 0; i < s.size(); i++)
    {
        lastIndex[s[i]] = i;
    }

    for (int i = 0; i < s.size(); i++)
    {

        char current = s[i];

        if (inStack.find(current) != inStack.end())
        {
            continue;
        }

        while (!st.empty() && st.top() > current && lastIndex[st.top()] > i)
        {
            inStack.erase(st.top());
            st.pop();
        }
        st.push(current);
        inStack.insert(current);
    }
    
    while (!st.empty())
    {
        answer += st.top();
        st.pop();
    }
    reverse(answer.begin(),answer.end());

    return answer;
}