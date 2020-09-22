// JUST USE THE PARENT ONLY
// USING 0 for not Visited
// USING 1 For Ongoing Node 
// Using 2 For Proccessed Node
bool checkLoop(vector<int>g[],int visited[],int curr,int parent)
{
    if(visited[curr]==1)
        return true;
    visited[curr]=1;
    for(int i=0;i<g[curr].size();i++)
    {
        if(visited[g[curr][i]]!=2 && parent!=g[curr][i])
        {
            if(checkLoop(g,visited,g[curr][i],curr))
            {
                visited[g[curr][i]]=2;
                return true;
            }
        }
    }
    visited[curr]=2;
    return false;
}
bool isCyclic(vector<int> g[], int V)
{
    int visited[V]={0};
    for(int i=0;i<V;i++)
    {
        if(visited[i]!=2)
        {
            if(checkLoop(g,visited,i,-1))
                return true;
        }
    }
    return false;
}