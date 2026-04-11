#include <bits/stdc++.h>
using namespace std;

int maximumWealth(vector<vector<int>> &accounts)
{
    int rows = accounts.size();
    int cols=accounts[0].size(); 
    int max_Wealth = INT_MIN ;
    for(int row=0;row<rows;row++){
          int wealth = 0;
          for(int col=0;col<cols;col++){
            wealth+=accounts[row][col];
            max_Wealth = max(max_Wealth,wealth);
          }
    }
    return max_Wealth;
}

int main()
{
    vector<vector<int>> accounts = {{1, 2, 3}, {3, 2, 1}};
    cout << maximumWealth(accounts) << endl;
    return 0;
}