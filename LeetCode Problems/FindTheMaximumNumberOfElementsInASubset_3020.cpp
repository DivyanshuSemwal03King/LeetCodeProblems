#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;


// JAVA CODE FOR REFERENCE
// import java.util.Arrays;
// import java.util.HashMap;
// import java.util.Map;

// class Solution {
//     public int maximumLength(int[] nums) {
//         Arrays.sort(nums);
//         int ones = 0;
//         int len = nums.length;
//         int ans = 1;
//         Map<Long, Integer> map = new HashMap<>();
//         for (int i = 0; i < len; i++) {
//             if (nums[i] == 1) {
//                 ones++;
//             }
//             map.put(nums[i] * 1L, map.getOrDefault(nums[i] * 1L, 0) + 1);
//         }
//         // System.out.println(map);
//         ans = ones % 2 == 0 ? ones - 1 : ones;
//         for (int i = ones; i < len; i++) {
//             long cur = nums[i];
//             int cnt = 0;
//             long next = cur * cur;
//             while (map.get(cur) >= 2 && map.containsKey(next)) {
//                 map.put(cur, map.get(cur) - 2);
//                 cnt += 2;
//                 cur = next;
//                 next = cur * cur;
//             }
//             cnt++;

//             ans = Math.max(cnt, ans);
//         }

//         return ans;
//     }
// }

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