#include <string>
#include <iostream>
using namespace std;

int isPalindrome(int num){
    string str =to_string(num);
    int left =0;
    int right = str.length() - 1;
    while(left < right){
        if(str[left] == str[right]){
            return true;
        }
        left++;
        right--;
    }
    return false;

}
int main() {
    int number;
    cout << "Enter an integer: ";
    cin >> number;

    if (isPalindrome(number)) {
        cout << number << " is a palindrome." << endl;
    } else {
        cout << number << " is not a palindrome." << endl;
    }

    return 0;
}

// //    LEETCODE SOLUTION :
// // CASE 1:
// class Solution {
// public:
//     bool isPalindrome(int x) {
//         if (x < 0) return false;

//         string s = to_string(x);
//         string rev = s;
//         reverse(rev.begin(), rev.end());

//         return s == rev;
//     }
// };

// // CASE 2:
// class Solution {
// public:
//     bool isPalindrome(int x) {

//         // Step 1: Handle invalid cases
//         if (x < 0 || (x % 10 == 0 && x != 0))
//             return false;

//         int reversedHalf = 0;

//         // Step 2: Reverse only half of the number
//         while (x > reversedHalf) {
//             reversedHalf = reversedHalf * 10 + x % 10;
//             x /= 10;
//         }

//         // Step 3: Compare both halves
//         return (x == reversedHalf || x == reversedHalf / 10);
//     }
// };

