//You are required to complete this method
vector<int> levelOrder(Node* node)
{
    vector<int> v;
    if(node == NULL)    return v;
    queue<Node*> q;
    q.push(node);
    while(!q.empty())
    {
        if(q.front()->left)
            q.push(q.front()->left);
        if(q.front()->right)
            q.push(q.front()->right);
        v.push_back(q.front()->data);
        q.pop();
    }
    return v;
}
