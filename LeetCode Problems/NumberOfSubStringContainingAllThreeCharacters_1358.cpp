#include <iostream>
#include <unordered_map>
#include <string>

using namespace std;

int numberOfSubstrings(string s)
{
    // worst  Approach
    // unordered_map<string,int> mp;
    // int i=0;
    // while (i<s.size())
    // {
    //     string temp = "";
    //     for(int k=i;k<s.size();k++){
    //         temp+=s[k];
    //         if(temp.size()>=3){
    //             mp[temp]++;
    //         }
    //     }
    //     i++;
    // }
    // int count =0;
    // for(auto & it :mp){
    //     if(it.first.find('a')!=string::npos&&it.first.find('b')!=string::npos&&it.first.find('c')!=string::npos){
    //         count+=it.second;
    //     }
    // }

    // return count;

    // Brute Approach O(n^2);

    // int count = 0;
    // for (int i = 0; i < s.size(); i++)
    // {
    //     int a = 0, b = 0, c = 0;
    //     for (int j = i; j < s.size(); j++)
    //     {
    //         if (s[j] == 'a')
    //             a++;
    //         else if (s[j] == 'b')
    //             b++;
    //         else if (s[j] == 'c')
    //             c++;
    //         if (a > 0 && b > 0 && c > 0)
    //             count++;
    //     }
    // }

    // return count;

    // int count = 0;
    //  for(int i=0;i<s.size();i++){
    //     string temp = "";
    //     for(int j=i;j<s.size();j++){
    //         temp+=s[j];
    //         if(temp.size()>=3){
    //             if(temp.find('a')!=string::npos&&temp.find('b')!=string::npos&&temp.find('c')!=string::npos){
    //                 count++;
    //             }
    //         }
    //     }
    //  }
    //  return count;

    // Optimal Approach O(n)
      unordered_map<char,int> mp;
    int count = 0;
    int left = 0;
    for(int right=0;right<s.size();right++){
        mp[s[right]]++;
        while(mp['a'] > 0 && mp['b'] > 0 && mp['c'] > 0){
            count += s.size() - right;
            mp[s[left]]--;
            left++;
        }
    }
    return count;
}

int main(){
   string s = "abcabc";
    cout<<numberOfSubstrings(s);

    return 0;
}
