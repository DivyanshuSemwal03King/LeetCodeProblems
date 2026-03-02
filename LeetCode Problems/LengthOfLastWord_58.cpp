#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int lengthOfLastWord(string s)
{
    int n = s.length();
    int count = 0;
    int i = n - 1;
    while (i >= 0 && s[i] == ' ')
    {
        i--;
    }
    while (i >= 0 && s[i] != ' ')
    {
        count++;
        i--;
    }

    return count;
}

int main()
{
    string s = "   fly me   to   the moon  ";
    cout << lengthOfLastWord(s);
    return 0;
}