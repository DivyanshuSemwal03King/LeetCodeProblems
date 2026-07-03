#include <iostream>
#include <vector>
#include <queue>

using namespace std;

bool findSafeWalk(vector<vector<int>> &grid, int health)
{
    int m = grid.size();
    int n = grid[0].size();
    vector<vector<int>> best(m, vector<int>(n, -1));

    int rowDir[] = {1, -1, 0, 0};
    int colDir[] = {0, 0, 1, -1};

    queue<tuple<int, int, int>> q;

    if(health - grid[0][0] < 1){
        return false;
    }

  
        best[0][0] = health - grid[0][0];

        q.push({0, 0, best[0][0]});
   

    while (!q.empty())
    {
        auto [row, col, currentHealth] = q.front();
        q.pop();

        if (row == m - 1 && col == n - 1)
            return true;

        for (int i = 0; i < 4; i++)
        {
            int newRow = rowDir[i] + row;
            int newCol = colDir[i] + col;
            if (newRow >= 0 && newRow < m && newCol >= 0 && newCol < n)
            {
                int newHealth = currentHealth - grid[newRow][newCol];
                if(newHealth < 1){
                    continue;
                }

                if(newHealth>best[newRow][newCol]){
                    best[newRow][newCol] = newHealth;
                    q.push({newRow,newCol,newHealth});
                }
            }
            
        }
    }
    return false;
}