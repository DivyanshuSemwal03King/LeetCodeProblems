#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int strStr(string haystack, string needle)
{
    if (needle.size() > haystack.size())
        return -1;

    if (needle.empty())
        return 0;
    for (int i = 0; i <= haystack.size() - needle.size(); i++)
    {
        if (haystack.substr(i, needle.size()) == needle)
        {
            return i;
        }
   }
   return -1;
}


int main(){

    string haystack = "abcdef";
    string needle ="abc";

   cout<< strStr(haystack,needle);
    return 0;
}
