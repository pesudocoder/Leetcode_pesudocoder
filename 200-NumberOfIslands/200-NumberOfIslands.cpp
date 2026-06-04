// Last updated: 6/4/2026, 1:23:43 PM
class Solution {
public:
    int dr[4] = {-1,0,1,0};
    int dc[4] = {0,1,0,-1};
    void dfs(int r , int c , vector<vector<char>>& grid , vector<vector<int>>& vis){
        vis[r][c]=1;
        int m = grid.size();
        int n = grid[0].size();
        for(int i = 0 ; i<4 ; i++){
            int nr = r+dr[i];
            int nc=c+dc[i];
            if(nr>=0 && nc >=0 && nr < m && nc < n 
                && !vis[nr][nc] && grid[nr][nc]=='1'){
                    dfs(nr,nc,grid,vis);
                }
        }
        

    }
    int numIslands(vector<vector<char>>& grid) {
        int m = grid.size();
        int n = grid[0].size();
        vector<vector<int>> vis(m,vector(n,0));
        int cnt=0;
        for(int i = 0 ;i<m ;i++){
            for(int j = 0 ; j <n ;j++){
                if(!vis[i][j] && grid[i][j]=='1'){
                    cnt++;
                    dfs(i,j,grid,vis);
                }
            }
        }
        return cnt;
        
    }
};