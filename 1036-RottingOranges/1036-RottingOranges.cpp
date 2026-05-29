// Last updated: 5/29/2026, 11:39:09 AM
class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {
        int m = grid.size();
        int n = grid[0].size();
        queue<pair<pair<int,int>,int>> q;
        vector<vector<int>> vis(m, vector<int>(n, 0)) ;
        for(int i = 0 ; i <m ;i++){
            for(int j = 0 ; j<n ;j++){
                if(grid[i][j]==2){
                    q.push({{i,j},0});
                    vis[i][j]=2;
                    
                }
                else {
                    vis[i][j]=0;
                }

            }
        }
        int tm = 0 ;
        int dr[] = {-1,0,1,0};
        int dc [] ={0,-1,0,1};
        while(!q.empty()){
            int r= q.front().first.first;
            int c= q.front().first.second;
            int t= q.front().second;
            q.pop();
            tm=max(t,tm);
            for(int i =0 ;i<4 ; i++){
                int nr= r+dr[i];
                int nc = c+dc[i];
                if(nc>=0 && nc<n && nr >=0 && nr <m 
                        && grid[nr][nc]==1 && vis[nr][nc]!=2 ){
                            q.push({{nr,nc},t+1});
                            vis[nr][nc] = 2;
                        }
            }}
            for(int i = 0 ; i< m ;i++){
                for(int j = 0 ; j < n ; j++){
                    if(vis[i][j]!=2 && grid[i][j]==1) return -1;
                }
            }
            return tm;
        }
        
    
};