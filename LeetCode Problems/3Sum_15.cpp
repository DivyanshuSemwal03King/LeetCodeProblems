#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> threeSum(vector<int> &nums)
{
    // vector<vector<int>> result;
    // set<vector<int>> s;
    // for (int i = 0; i < nums.size(); i++)
    // {

    //     for (int j = i + 1; j < nums.size(); j++)
    //     {
    //         for (int k = j + 1; k < nums.size(); k++)
    //         {

    //             if (nums[i] + nums[j] + nums[k] == 0)
    //             {
    //                 vector<int> temp = {nums[i], nums[j], nums[k]};
    //                 sort(temp.begin(), temp.end());
    //                 s.insert(temp);
    //             }
    //         }
    //     }
    // }
    // for (auto it : s)
    // {
    //     result.push_back(it);
    // }
    // return result;


    // Optimal Approch :

      vector<vector<int>> result;
    sort(nums.begin(), nums.end());

    for(int i = 0; i < nums.size(); i++){
        if(i > 0 && nums[i] == nums[i-1]) continue;

        int left = i + 1;
        int right = nums.size() - 1;

        while(left < right){
            int sum = nums[i] + nums[left] + nums[right];

            if(sum == 0){
                result.push_back({nums[i], nums[left], nums[right]});

                while(left < right && nums[left] == nums[left+1]) left++;
                while(left < right && nums[right] == nums[right-1]) right--;

                left++;
                right--;
            }
            else if(sum < 0){
                left++;
            }
            else{
                right--;
            }
        }
    }

    return result;
}

int main()
{
    vector<int> nums = {-1, 0, 1, 2, -1, -4};
    vector<vector<int>> result = threeSum(nums);
    for (int i = 0; i < result.size(); i++)
    {
        for (int j = 0; j < result[i].size(); j++)
        {
            cout << result[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}