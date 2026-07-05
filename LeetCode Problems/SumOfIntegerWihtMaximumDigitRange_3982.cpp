#include <iostream>
#include <vector>

using namespace std;

int maxDigitRange(vector<int> &nums)
{
    vector<int> range;
     int maxRange = -1;

    for (int num : nums)
    {
        string temp = to_string(num);

        int largest = 0;
        int smallest = 9;
        int ran = 0;
       

        for (char c : temp)
        {
            int digit = c - '0';

            largest = max(largest, digit);
            smallest = min(smallest, digit);

           
        }

        ran = largest-smallest;

         maxRange = max(ran,maxRange);

        range.push_back(ran);


    }

    int sum = 0;
    for(int i=0;i<range.size();i++){
        if(range[i]==maxRange){
            sum+=nums[i];
        }
    }

    return sum;
}

int main()
{
    vector<int> nums = {5724,111,350};
    int result = maxDigitRange(nums);
    cout << "Sum of integers with maximum digit range: " << result << endl;
    return 0;
}