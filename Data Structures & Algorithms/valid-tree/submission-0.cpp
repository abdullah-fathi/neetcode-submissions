class Solution {
public:
    vector<bool> vis;
    
    bool dfs(int u, int parent, vector<vector<int>>& adj)
    {
        vis[u] = true;
        for (int v : adj[u])
        {
            if (!vis[v])
            {
                if (!dfs(v, u, adj)) return false;
            }
            else if (v != parent)
            {
                return false; 
            }
        }
        return true;
    }

    bool validTree(int n, vector<vector<int>>& edges) {
        if (edges.size() != n - 1) return false;

        vector<vector<int>> adj(n);
        for (auto &e : edges)
        {
            adj[e[0]].push_back(e[1]);
            adj[e[1]].push_back(e[0]);
        }

        vis.assign(n, false);

        if (!dfs(0, -1, adj)) return false;

        for (int i = 0; i < n; i++)
        {

            if (!vis[i]) 
            {
              return false;
            } 

        }
     return true;
      
    }
};