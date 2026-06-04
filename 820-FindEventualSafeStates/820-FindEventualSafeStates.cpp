// Last updated: 6/4/2026, 1:23:22 PM
class Solution {
public:
    vector<int> eventualSafeNodes(vector<vector<int>>& graph) {
        vector<vector<int>> adjrev(graph.size());
        queue<int> q;
        vector<int> indegree(graph.size(),0);
        vector<int> safe;
        for(int i = 0 ; i<graph.size();i++){
            for(auto it : graph[i]){
                adjrev[it].push_back(i);
                indegree[i]++;
            }
        }
        for(int i = 0 ; i < graph.size();i++){
            if(indegree[i]==0) q.push(i);
        }
        while(!q.empty()){
            int node= q.front();
            q.pop();
            safe.push_back(node);
            for(auto it : adjrev[node]){
                indegree[it]--;
                if(indegree[it]==0) q.push(it);
            }
        }
        sort(safe.begin(),safe.end());
        return safe;

        
    }
};