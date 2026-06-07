// Last updated: 6/7/2026, 1:17:12 PM
class Solution {
public:
    int findCheapestPrice(int n, vector<vector<int>>& flights, int src, int dst, int k) {
        vector<pair<int,int>> adj[n];
        for(auto it : flights){
            adj[it[0]].push_back({it[1],it[2]});
        }
        queue<pair<int,pair<int,int>>> q;//{stops,{node,cost}}
        vector<int> dist(n,1e9);
        q.push({0,{src,0}});
        dist[src]=0;
        while(!q.empty()){
            auto it = q.front();
            int stops = it.first;
            int node = it.second.first;
            int cost = it.second.second;
            q.pop();
            if(stops>k) continue;
            for(auto n : adj[node]){
                int adjnode=n.first;
                int edw = n.second;
                if(cost+edw < dist[adjnode] && stops <=k){
                    dist[adjnode]=cost+edw;
                    q.push({stops+1,{adjnode,cost+edw}});
                }

            }
        }

        if(dist[dst]==1e9) return -1;
        return dist[dst];
        
    }
};