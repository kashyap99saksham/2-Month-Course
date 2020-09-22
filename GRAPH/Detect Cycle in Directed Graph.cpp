// USING 0 for not Visited
// USING 1 For Ongoing Node 
// Using 2 For Proccessed Node
bool MyDFS(vector<int> adj[],int curr,int visited[])
{
    if(visited[curr] == 1)
        return true;
    visited[curr] = 1;
    for(int i=0;i<adj[curr].size();i++)
    {
        if(visited[adj[curr][i]] != 2)
        {
            if(MyDFS(adj,adj[curr][i],visited))
                return true;
        }
    }
    visited[curr] = 2;
    return false;
}
bool isCyclic(int V, vector<int> adj[])
{
    int visited[V] = {0};
    for(int i=0;i<V;i++)
    {   
        if(visited[i]==0)
        {
            if(MyDFS(adj,i,visited))
                return true;
        }   
    }
    return false;
}