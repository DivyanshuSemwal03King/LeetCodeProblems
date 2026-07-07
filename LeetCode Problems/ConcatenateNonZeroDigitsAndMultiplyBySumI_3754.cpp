#include<iostream>

using namespace std;


class Solution {
public:
    long long sumAndMultiply(int n) {
        long long addition = 0;
        long long x = 0;
        string str = to_string(n);

        for(char ch :str){
            if(ch!='0'){
                
                x = x*10 + (ch -'0');
                addition +=ch-'0';
            }
        }

        return addition*x;
       
    }


    //   long long sumAndMultiply(int n) {
    //     long long x = 0, sum = 0;
    //     long long place = 1;

    //     while (n > 0) {
    //         int d = n % 10;

    //         if (d != 0) {
    //             x += place * d;
    //             place *= 10;
    //         }

    //         sum += d;
    //         n /= 10;
    //     }

    //     return x * sum;
    // }
};

int main(){
    Solution s;

    int n = 10203004;
   cout<<s.sumAndMultiply(n);

   return 0;
}