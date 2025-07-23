class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {
        int m = grid.size();
        int n = grid[0].size();

        int ans = 0;
        bool change = true;

        while (change) {
            change = false;
            vector<pair<int, int>> toRot;

            for (int i = 0; i < m; i++) {
                for (int j = 0; j < n; j++) {
                    if (grid[i][j] == 2) {
                        toRot.push_back({i, j});
                    }
                }
            }

            vector<vector<bool>> visited(m, vector<bool>(n, false));
            for (auto [r, c] : toRot) {
                if (r > 0 && grid[r - 1][c] == 1 && !visited[r - 1][c]) {
                    grid[r - 1][c] = 2;
                    visited[r - 1][c] = true;
                    change = true;
                }
                if (r < m - 1 && grid[r + 1][c] == 1 && !visited[r + 1][c]) {
                    grid[r + 1][c] = 2;
                    visited[r + 1][c] = true;
                    change = true;
                }
                if (c > 0 && grid[r][c - 1] == 1 && !visited[r][c - 1]) {
                    grid[r][c - 1] = 2;
                    visited[r][c - 1] = true;
                    change = true;
                }
                if (c < n - 1 && grid[r][c + 1] == 1 && !visited[r][c + 1]) {
                    grid[r][c + 1] = 2;
                    visited[r][c + 1] = true;
                    change = true;
                }
            }
            if (change) ans++;
        }

        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                if (grid[i][j] == 1) return -1;
            }
        }

        return ans;
    }
};
