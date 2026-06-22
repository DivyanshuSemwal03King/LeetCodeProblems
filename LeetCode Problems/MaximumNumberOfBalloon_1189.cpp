#include <iostream>
#include <unordered_map>
#include <string>
#include <algorithm>

using namespace std;

int maxNumberOfBalloons(string text)
{
    unordered_map<char, int> mp;
   
    for (char x : text)
    {
        mp[x]++;

     
    }

   return min({
            mp['b'],
            mp['a'],
            mp['l']/2,
            mp['o']/2,
            mp['n']
        });
}

int main(){
    string text = "nlaebolko";
    cout<<maxNumberOfBalloons(text);
    return 0;
}