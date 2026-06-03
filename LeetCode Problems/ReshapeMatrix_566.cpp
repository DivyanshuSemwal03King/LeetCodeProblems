#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> matrixReshape(vector<vector<int>> &mat, int r, int c)
{
      int m = mat.size();
    int n = mat[0].size();


    if (m * n != r * c)
        return mat;

    vector<int> flat;

 
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            flat.push_back(mat[i][j]);
        }
    }

   
    vector<vector<int>> reshape(r, vector<int>(c));
    int k = 0;

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            reshape[i][j] = flat[k++];
        }
    }

    return reshape;
     
    
}

int main()
{
    vector<vector<int>> mat = {{1, 2}, {3, 4}};
    int r = 1, c = 4;
    vector<vector<int>> reshape = matrixReshape(mat, r, c);
    for (int i = 0; i < reshape.size(); i++)
    {
        for (int j = 0; j < reshape[0].size(); j++)
        {
            cout << reshape[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}