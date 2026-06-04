// Last updated: 6/4/2026, 1:23:41 PM
class Solution {
public:
    bool cycledetected(int node , vector<vector<int>> & adj , vector<int>& vis , vector<int>& pathvis){
        vis[node]=1;
        pathvis[node]=1;
        for(auto it : adj[node]){
            if(!vis[it]){
                if(cycledetected(it,adj,vis,pathvis)) return true;
            }
            if(vis[it] && pathvis[it]) return true;
        }
        pathvis[node]=0;
        return false;
    }
    bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {
        vector<vector<int>> adj(numCourses);
        for(auto it : prerequisites){
            int course = it[0];
            int pre = it[1];
            adj[pre].push_back(course);
        }
        vector<int> vis(numCourses);
        vector<int> pathvis(numCourses);
        for(int i = 0 ; i <numCourses ; i++){
            if(!vis[i]){
                if(cycledetected(i,adj,vis,pathvis)) return false;
            }
        }
        return true;
        
    }
};