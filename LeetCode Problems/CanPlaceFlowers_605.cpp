#include <iostream>
#include <vector>
using namespace std;

bool canPlaceFlowers(vector<int> &flowerbed, int n)
{
    int i = 0;
    while (i < flowerbed.size() && n != 0)

    {
        if (flowerbed[i] == 1)
        {
            i += 2;
        }
        else if (flowerbed[i] != 1 && n != 0)
        {
            flowerbed[i] = 1;
            n--;
            i++;
        }
        else if (n != 0)
        {
            return false;
        }

        else
        {
            return true;
        }
    }
}

int main()
{
    vector<int> arr = {1, 0, 0, 0, 1};
    cout << canPlaceFlowers(arr, 1);
    return 0;
}