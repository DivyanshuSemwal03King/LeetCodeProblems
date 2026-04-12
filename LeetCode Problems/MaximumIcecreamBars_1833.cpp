#include <bits/stdc++.h>
using namespace std;

int maxIceCream(vector<int> &costs, int coins)
{

    sort(costs.begin(), costs.end());
    int cost = 0;
    int maxIcecream = 0;
    for (int i = 0; i < costs.size(); i++)
    {
        if(costs[i]>coins){
            maxIcecream=0;
            break;
        }
       
        cost += costs[i];
        
         if (cost > coins)
        {
            break;
        }
        maxIcecream+=1;
    }
    return maxIcecream;
}

int main()
{
    vector<int> costs ={1,1,2,3,4};
    int coins = 7;
    cout << maxIceCream(costs, coins);
    return 0;
}