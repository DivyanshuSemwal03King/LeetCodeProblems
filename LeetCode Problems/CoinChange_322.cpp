#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int solve(vector<int> &coins, int amount, vector<int> &dp)
{
    // if(amount==0) return 0;
    // if(amount<0)return -1;
    // if(dp[amount]!=INT_MAX) return dp[amount];
    // int mini = INT_MAX;
    // for(int coin:coins)
    // {
    //     int ans = solve(coins,amount-coin,dp);
    //     if(ans==-1) continue;
    //     mini = min(mini,ans+1);
    // }
    // return dp[amount] = mini;

    if (amount == 0)
        return 0;

    if (amount < 0)
        return -1;

    if (dp[amount] != -2)
        return dp[amount];

    int mini = INT_MAX;

    for (int coin : coins)
    {
        int ans = solve(coins, amount - coin, dp);

        if (ans == -1)
            continue;

        mini = min(mini, ans + 1);
    }
    if (mini == INT_MAX)
        return dp[amount] = -1;

    return dp[amount] = mini;
}

int coinChange(vector<int> &coins, int amount)
{
    // vector<int> dp(amount+1,INT_MAX);

    // int ans = solve(coins,amount,dp);
    // if(ans==INT_MAX) return -1;
    // return ans;

    vector<int> dp(amount + 1, -2);

    return solve(coins, amount, dp);
}

int main()
{
    vector<int> coins = {1, 2, 5};
    int amount = 11;
    cout << coinChange(coins, amount) << endl; // Output: 3 (11 can be made with 5 + 5 + 1)
    return 0;
}