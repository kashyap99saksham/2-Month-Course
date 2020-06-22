vector <int> bfs(vector<int> g[], int N) {
    vector<int> v;
    vector<bool> visited(N,false);
    if(N == 0)  return v;

    queue<int>q;
    q.push(0);
    visited[0] = true;
    while(!q.empty())
    {
        int t = q.front();
        v.push_back(t);
        for(auto v : g[t])
        {
            if(!visited[v])
            {
                visited[v] = true;
                q.push(v);
            }
        }
        q.pop();
    }
    return v;
}