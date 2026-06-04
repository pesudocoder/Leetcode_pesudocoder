// Last updated: 6/4/2026, 1:23:17 PM
class Solution {
public:
    int dr[4] = {-1, 0, 1, 0};
    int dc[4] = {0, -1, 0, 1};

    void dfs(int r, int c, vector<vector<int>>& grid,
             vector<vector<int>>& vis) {

        vis[r][c] = 1;

        int m = grid.size();
        int n = grid[0].size();

        for(int i = 0; i < 4; i++) {
            int nr = r + dr[i];
            int nc = c + dc[i];

            if(nr >= 0 && nc >= 0 &&
               nr < m && nc < n &&
               !vis[nr][nc] &&
               grid[nr][nc] == 1) {

                dfs(nr, nc, grid, vis);
            }
        }
    }

    int numEnclaves(vector<vector<int>>& grid) {

        int m = grid.size();
        int n = grid[0].size();

        vector<vector<int>> vis(m, vector<int>(n, 0));

        // Top and Bottom rows
        for(int j = 0; j < n; j++) {

            if(grid[0][j] == 1 && !vis[0][j])
                dfs(0, j, grid, vis);

            if(grid[m - 1][j] == 1 && !vis[m - 1][j])
                dfs(m - 1, j, grid, vis);
        }

        // Left and Right columns
        for(int i = 0; i < m; i++) {

            if(grid[i][0] == 1 && !vis[i][0])
                dfs(i, 0, grid, vis);

            if(grid[i][n - 1] == 1 && !vis[i][n - 1])
                dfs(i, n - 1, grid, vis);
        }

        int cnt = 0;

        for(int i = 0; i < m; i++) {
            for(int j = 0; j < n; j++) {

                if(grid[i][j] == 1 && !vis[i][j])
                    cnt++;
            }
        }

        return cnt;
    }
};