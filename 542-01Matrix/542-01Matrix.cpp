// Last updated: 5/29/2026, 11:39:17 AM
class Solution {
public:
    vector<vector<int>> updateMatrix(vector<vector<int>>& mat) {
        int m = mat.size();
        int n = mat[0].size();
        vector<vector<int>> vis (m , vector(n,0));
        vector<vector<int>> dis (m , vector(n,0));
        queue<pair<pair<int,int>,int>> q;
        for(int i = 0 ; i< m ; i++){
            for(int j = 0 ; j< n ; j++){
                if(mat[i][j]==0){
                    q.push({{i,j},0});
                    vis[i][j]=1;

                }
                else{
                    vis[i][j]=0;
                }
            }
        }
        int dr[] = {-1,0,1,0};
        int dc[] = {0,-1,0,1};
        while(!q.empty()){
            int r = q.front().first.first;
            int c = q.front().first.second;
            int steps = q.front().second;
            q.pop();
            dis[r][c]=steps;
            for(int i = 0 ;i<4 ; i++){
                int nr = r +dr[i];
                int nc = c + dc[i];
                if(nc>=0 && nc < n && nr >=0 && nr < m && vis[nr][nc]==0){
                    q.push({{nr,nc},steps+1});
                    vis[nr][nc]=1;

                }
            }
        }

        return dis;
        
    }
};