#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

int maximumLength(vector<int> &nums)
{
    unordered_map<long long,int> mp;
    for (int x : nums)
    {
        mp[x]++;
    }

    int ans = 1;
      if (mp.count(1)) {
            if (mp[1] % 2 == 0)
                ans = max(ans, mp[1] - 1);
            else
                ans = max(ans, mp[1]);
        }


    for (auto &it : mp)
    {
        long long current = it.first;
           if (current == 1)
                continue;
        int length = 0;
        while (true)
        {
            if (mp[current] >= 2)
            {
                length += 2;
                if (current >  31622)
                {
                    break;
                }
                current = current * current;
            }
            else if (mp[current] == 1)
            {
                length ++;
                break;
               
            }
            else
            {
                length--;
                break;
            }
        }
        ans = max(ans, length);
    }
    return ans;
}

int main()
{
    vector<int> nums = {1, 2, 4, 16, 256};
    int result = maximumLength(nums);
    cout << "Maximum length of subset: " << result << endl;
    return 0;
}