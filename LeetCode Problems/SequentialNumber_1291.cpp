#include <iostream>
#include <vector>
#include<algorithm>
using namespace std;

vector<int> sequentialDigits(int low, int high)
{
    //   Optimal logic but not clean code 

    // vector<int> ans;
    // int num = 0;
    // int next_num = 0, prev_num = 0;
    // for (int i = 1; i <= 9; i++)
    // {
    //     prev_num = i;
    //     num = prev_num;
    //     for (int j = 1; j <= 9; j++)
    //     {

    //         if (i != j)
    //         {
    //             next_num = j;

    //             if (next_num == prev_num+1)
    //             {
    //                 prev_num = next_num;
    //                 num = num * 10 + next_num;
    //                 if (low <= num && num<=high)
    //                 {
    //                     ans.push_back(num);
    //                 }
    //                 if (high < num)
    //                 {
    //                     break;
    //                 }
    //             }
    //         }
    //     }
    // }
    // sort(ans.begin(), ans.end());
    // return ans;

    // clean COde

    vector<int> ans;
    int num =0;
    for(int i=1;i<=9;i++){
        num =i;
        for(int j=i+1;j<=9;j++){
            num = num*10+j;
            if(low<=num && num<=high){
                ans.push_back(num);
            }
            if(num>high) break;
        }
    }
    sort(ans.begin(), ans.end());
    return ans;
}

int main()
{
    int low = 100;
    int high = 300;
    vector<int> res = sequentialDigits(low, high);
    for (int x : res)
    {
        cout << x << " ";
    }

    return 0;
}