class Solution {
public:
    vector<bool> vis;
    void dfs(int u, vector<vector<int>>& adj)
    {
        vis[u] = true;
        for (auto v : adj[u])
        {
            if (!vis[v])
            {
                dfs(v, adj);
            }
        }
    }
    int countComponents(int n, vector<vector<int>>& v) {
      vector<vector<int>> adj;
      adj.assign(n, {});
      for (int i = 0; i < v.size(); i++)
      {
        adj[v[i][0]].push_back(v[i][1]);
        adj[v[i][1]].push_back(v[i][0]);
      }
      vis.assign(n, false);
      int ans = 0;
      for (int i = 0; i < n; i++)
      {
        if (!vis[i])
        {
            ans++;
            dfs(i, adj);
        }
      }
      return ans;
    }
};
