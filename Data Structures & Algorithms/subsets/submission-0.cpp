class Solution
{
public:
  vector<vector<int>> subsets(vector<int> &v)
  {
    vector<vector<int>> x;
    for (int i = 0; i < (1 << v.size()); i++)
    {
      vector<int> t;
      for (int j = 0; j < v.size(); j++)
      {
        if (i & (1 << j))
        {
          t.push_back(v[j]);
        }
      }
      x.push_back(t);
    }
    return x;
  }
};