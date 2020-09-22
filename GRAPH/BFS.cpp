vector <int> bfs(vector<int> g[], int N) 
{
    bool visited[N] = { false };
    vector<int> ans;
    queue<int>q;
    q.push(0);
    visited[0] = true;
    while(!q.empty())
    {
        int val = q.front();
        ans.push_back(val);
        q.pop();
        for(int i=0;i<g[val].size();i++)
        {
            if(visited[g[val][i]] == false)
            {
                q.push(g[val][i]);
                visited[ g[val][i] ] = true;
            }
        }
    }
    return ans;
}