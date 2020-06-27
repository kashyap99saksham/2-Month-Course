// function should print the topView of the binary tree
void topView(struct Node *root)
{
    if(root == NULL)    return;
    map<int , Node *> m;
    queue< pair<Node *,int> >q;
    q.push({root,0});
    while(!q.empty())
    {
        if(m.find(q.front().second) == m.end())
            m[q.front().second] = q.front().first;
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
        cout<<i.second->data<<" ";
    }
}
