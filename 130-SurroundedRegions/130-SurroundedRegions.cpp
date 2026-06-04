// Last updated: 6/4/2026, 1:23:53 PM
class Solution {
public:
    int dr[4] = {-1,0,1,0};
    int dc[4] = {0,-1,0,1};
    void dfs(int r , int c , vector<vector<char>> & board , vector<vector<int>>& vis){
        vis[r][c]=1;
        int m=board.size();
        int n = board[0].size();

        for(int i = 0 ; i<4 ; i++){
            int nr = r +dr[i];
            int nc = c+dc[i];
            if(nr>=0 && nc >= 0 && nr<m && nc <n && !vis[nr][nc] && board[nr][nc]=='O'){
                dfs(nr,nc,board,vis);
            }
        }
    }
    void solve(vector<vector<char>>& board) {
        int m=board.size();
        int n = board[0].size();
        vector<vector<int>> vis(m,vector<int>(n,0));
        for(int j = 0 ; j < n ; j++){
            if(board[0][j]=='O' && !vis[0][j]){
                dfs(0,j,board,vis);
            }
            if(board[m-1][j]=='O' && !vis[m-1][j]){
                dfs(m-1,j,board,vis);
            }
        }
        for(int i = 0 ; i < m ;i++){
            if(board[i][0]=='O' && !vis[i][0]){
                dfs(i,0,board,vis);
            }
            if(board[i][n-1]=='O' && !vis[i][n-1]){
                dfs(i,n-1,board,vis);
            }
        }
        for(int i = 0 ; i < m ;i++){
            for(int j = 0 ; j < n ; j++){
                if(!vis[i][j] && board[i][j]=='O'){
                    board[i][j]='X';
                }
            }
        }
        
    }
};