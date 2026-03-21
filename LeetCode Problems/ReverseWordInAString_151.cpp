#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

string reverseWords(string s)
{
    string result;
    int n = s.size();
    int i = 0;
    while (i < n && s[i] == ' ')
        i++;
    while (i < n)
    {

        if (s[i] != ' ')
        {
            result += s[i];
        }
        else
        {

            if (!result.empty() && result.back() != ' ')
            {
                result += ' ';
            }
        }
        i++;
    }
    if (!result.empty() && result.back() == ' ')
    {
        result.pop_back();
    }
    reverse(result.begin(), result.end());
    int j = 0;
    for (int i = 0; i < result.size(); i++)
    {
        if (result[i] == ' ')
        {
            reverse(result.begin() + j, result.begin() + (i));
            j = i + 1;
        }
        else if (i == result.size() - 1)
        {
            reverse(result.begin() + j, result.begin() + (i + 1));
        }
    }

    return result;
}

int main()
{
    string s = "the sky is blue";
    cout << reverseWords(s);
    return 0;
}