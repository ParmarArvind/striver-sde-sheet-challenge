class Solution {
  public:
    bool isSafe( unordered_map<int,vector<int>>&adj ,vector<int>&color,int node,int currColor)
    {
        for(auto &v:adj[node])
        {
            if(color[v]==currColor) return false;
        }
        return true;
    }
    bool solve( unordered_map<int,vector<int>>&adj ,vector<int>&color,int node,int m)
    {
        if(node==color.size()) return true;
        
        for(int i=1;i<=m;i++)
        {
            if(isSafe(adj,color,node,i))
            {
                color[node]=i;
                
                if(solve(adj,color,node+1,m)) return true;
                color[node]=0;
            }
        }
        
        return false;
    }
    bool graphColoring(int v, vector<vector<int>> &edges, int m) {
        // code here
        unordered_map<int,vector<int>>adj;
        for(auto &edge :edges)
        {
            int u=edge[0];
            int v=edge[1];
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        
        vector<int>color(v,0);
        return solve(adj, color,0,m);
        
    }
};