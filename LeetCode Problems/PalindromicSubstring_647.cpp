#include <bits/stdc++.h>
using namespace std;

int countSubstrings(string s)
{
//     int count = s.size();
//     int j = s.size() - 1;
//     for (int i = 0; i < s.size(); i++)
//     {
//         if (s[i] == s[j])
//         {
//             count += 1;
//         }
//         else
//         {
//             break;
//         }
//     }
//     return count;

int n= s.size();
int count = 0;
for(int center=0;center<n;center++){
    int l=center,r=center;
    while(l>=0&&r<n&&s[l]==s[r]){
        count++;
        l--;
        r++;
    }
     l=center,r=center+1;

       while(l>=0&&r<n&&s[l]==s[r]){
        count++;
        l--;
        r++;
    }
}
return count;
}

int main(){
    string s = "aaa";
    cout<<countSubstrings(s);
    return 0;
}