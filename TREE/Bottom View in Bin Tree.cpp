vector <int> bottomView(Node *root)
{
    vector<int>v;
    if(root == NULL)    return v; 
    map <int , Node* >m;
    m[0] = root;
    queue < pair<Node *,int> > q;
    q.push({root,0});
    while(!q.empty())
    {
        Node *t = q.front().first;
        int hr =q.front().second;
        q.pop();
        if(t->left) 
        {
            m[hr-1] = t->left;
            q.push({t->left , hr-1});
        }
        if(t->right)
        {
            m[hr+1] = t->right;
            q.push({t->right , hr + 1});
        }
    }    
    for(auto i : m)
    {
        cout<<i.second->data<<" ";
    }
    return v;
}

