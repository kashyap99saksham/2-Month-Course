// root: root node of the tree
vector<int> verticalOrder(Node *root)
{
    vector <int> v; 
    if(root == NULL)    return v;
    map<int , vector<Node *>> m;
    queue< pair<Node *,int> >q;
    q.push({root,0});
    while(!q.empty())
    {
        m[q.front().second].push_back(q.front().first); 
        if(q.front().first->left)   
        {
            q.push({q.front().first->left , q.front().second - 1});
        }
        if(q.front().first->right)  
        {
            q.push({q.front().first->right , q.front().second + 1});
        }
        q.pop();
    }
    for(auto i : m)
    {
        for(auto j : i.second)
            v.push_back(j->data);
    }
    return v;
}

