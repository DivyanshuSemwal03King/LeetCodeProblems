#include <iostream>
#include <vector>
using namespace std;

bool validMountainArray(vector<int> &arr)
{
    if (arr.size() >= 3)
    {
        bool result;
        int peek = 0;
        for (int i = 0, j = 1; i < arr.size(), j < arr.size() - 1; i++, j++)
        {
            if (arr[i] < arr[j])
            {
                peek = arr[j];
            }
            else if (peek != 0 && arr[i] > arr[j])
            {
                result = true;
            }
            else
            {
                result = false;
            }
        }
        if (result == true)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
    else
    {
        return false;
    }
}


int main(){

    vector<int> arr ={0,3,2,1};
    cout<<validMountainArray(arr);
    return 0;

}