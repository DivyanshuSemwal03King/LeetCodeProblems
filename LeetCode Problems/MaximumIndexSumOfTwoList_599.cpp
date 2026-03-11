#include <bits/stdc++.h>
using namespace std;

vector<string> findRestaurant(vector<string> &list1, vector<string> &list2)
{
    unordered_map<string, int> mp;
    vector<string> result;
    int minSum = INT_MAX;

    for (int i = 0; i < list1.size(); i++)
    {
        mp[list1[i]] = i;
    }

    for (int i = 0; i < list2.size(); i++)
    {
        if (mp.find(list2[i]) != mp.end())
        {
            int sum = i + mp[list2[i]];

            if (sum < minSum)
            {
                minSum = sum;
                result.clear();
                result.push_back(list2[i]);
            }
            else if (sum == minSum)
            {
                result.push_back(list2[i]);
            }
        }
       
    }
     return result;
}

int main()
{
    vector<string> list1 = {"Shogun", "Tapioca Express", "Burger King", "KFC"};
    vector<string> list2 = {"Piatti", "The Grill at Torrey Pines", "Hungry Hunter Steakhouse", "Shogun"};
    findRestaurant(list1, list2);
    return 0;
}