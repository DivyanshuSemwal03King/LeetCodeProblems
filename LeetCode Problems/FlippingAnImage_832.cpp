#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<vector<int>> flipAndInvertImage(vector<vector<int>> &image)
{

    vector<vector<int>> result(image.size(), vector<int>(image[0].size()));
    for (int i = 0; i < image.size(); i++)
    {
        reverse(image[i].begin(), image[i].end());
    }
    for (int i = 0; i < image.size(); i++)
    {
        for (int j = 0; j < image.size(); j++)
        {
            if (image[i][j] == 0)
            {
                result[i][j] = 1;
            }
            else
            {
                result[i][j] = 0;
            }
        }
    }

    return result;
}

int main()
{
    vector<vector<int>> image = {{1, 1, 0}, {1, 0, 1}, {0, 0, 0}};
    vector<vector<int>> result = flipAndInvertImage(image);
    for (int i = 0; i < result.size(); i++)
    {
        for (int j = 0; j < result[0].size(); j++)
        {
            cout << result[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}