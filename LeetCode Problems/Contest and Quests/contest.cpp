#include<iostream>
using namespace std;

string reversePrefix(const string &s, int k) {
    char arr[s.length() + 1];
 for(int i = 0; i < s.length(); i++) {
    if(k > i) {
        arr[i] = s[k - i - 1];
    } else {
        arr[i] = s[i];
    }
 }

cout << arr;

}
int main() {
    string s = "abcdefg";
    int k = 6;
    reversePrefix(s, k);
    return 0;
}
   