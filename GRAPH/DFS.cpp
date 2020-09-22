void MyDfs(vector<int>g[],bool visited[],int curr,vector<int>&ans)
{
    visited[curr] = true;
    ans.push_back(curr);
    for(int i=0;i<g[curr].size();i++)
    {
        if(visited[ g[curr][i]] == false)
            MyDfs(g,visited,g[curr][i],ans);
    }
}
vector <int> dfs(vector<int> g[], int N)
{
    bool visited[N] = {false};
    vector<int>ans;
    MyDfs(g,visited,0,ans);
    return ans;
}