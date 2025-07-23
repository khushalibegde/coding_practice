#include <bits/stdc++.h> 
int res = 0, emptyCells = 0;

void dfs(vector<vector<int>>& grid, int x, int y, int count) {
    if (x < 0 || y < 0 || x >= grid.size() || y >= grid[0].size() || grid[x][y] == -1)
        return;

    if (grid[x][y] == 2) {
        if (emptyCells == count) res++; 
        return;
    }

    int temp = grid[x][y];
    grid[x][y] = -1; 

    dfs(grid, x+1, y, count+1);
    dfs(grid, x-1, y, count+1);
    dfs(grid, x, y+1, count+1);
    dfs(grid, x, y-1, count+1);

    grid[x][y] = temp; 
}

int robotPaths(int n, int m, vector<vector<int>> arr) {
    res = 0;
    emptyCells = 0;
    int start_x = -1, start_y = -1;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (arr[i][j] == 1) {
                start_x = i;
                start_y = j;
            } else if (arr[i][j] == 0) {
                emptyCells++;
            }
        }
    }

    emptyCells++;  
    arr[start_x][start_y] = 0; 
    dfs(arr, start_x, start_y, 0);

    return res;
}
