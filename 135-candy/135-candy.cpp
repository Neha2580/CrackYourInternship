class Solution {
public:
    int candy(vector<int>& a) {
         int n = a.size();
    vector<int> adj[n];
    vector<int> inDegree(n, 0);
    for (int i = 0; i < n - 1; i++)
    {
        int u = a[i], v = a[i + 1];
        if (v > u)
            adj[i].push_back(i + 1), inDegree[i + 1]++;
        else if (u > v)
            adj[i + 1].push_back(i), inDegree[i]++;
    }
    queue<int> q;
    for (int i = 0; i < n; i++)
    {
        if (inDegree[i] == 0)
            q.push(i);
    }
    int ans = 0, curr = 1;
    while (!q.empty())
    {
        int size = q.size();
        while (size--)
        {
            int node = q.front();
            q.pop();
            ans += curr;
            for (auto &x : adj[node])
            {
                inDegree[x]--;
                if (inDegree[x] == 0)
                    q.push(x);
            }
        }
        curr++;
    }
    return ans;
    }
};