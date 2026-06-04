// Last updated: 6/4/2026, 1:23:24 PM
class Solution {
public:
    bool dfs(int node , int col ,vector<vector<int>>& graph,vector<int> &  colour ){
        colour[node]=col;
        for(auto it : graph[node]){
            if(colour[it]==-1){
                if(dfs(it,!col,graph,colour)==false) return false;
            }
            else if(colour[it]==col) return false;
        }
        return true;
    }
    bool isBipartite(vector<vector<int>>& graph) {
        int v = graph.size();
        vector<int> colour(v,-1);
        for(int i = 0 ; i<v ; i++){
            if(colour[i]==-1){
                if(dfs(i,0,graph,colour)==false) return false;
            }
        }
        return true;


        
    }
};