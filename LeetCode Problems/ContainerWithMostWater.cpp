#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int maxArea(vector<int> &height)
{
    int n =height.size();
    int left = 0, right = n-1;
    int max_area = 0;
    while (left<right)
    {
        int area = min(height[left], height[right]) * (right - left);
        max_area = max(max_area, area);
        if (height[left] < height[right])
            left++;
        else
            right--;
    }
    
    return max_area; //I stuck in the logic of the Problem so I take help from the gpt and this logic is given by gpt but the code is written by me.
    
}

int main()
{
    vector<int> height = {1,8,6,2,5,4,8,3,7};
    cout<<maxArea(height)<<endl;
    return 0;
}