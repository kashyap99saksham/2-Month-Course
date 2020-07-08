void leftView(Node *root)
{
    if(root==NULL)  return;    
    queue<Node *> q;
    q.push(root);
    q.push(NULL);
    cout<<root->data<<" ";
    while(!q.empty())
    {
        Node *t = q.front();
        q.pop();
        if(t == NULL && !q.empty())
        {
            cout<<q.front()->data<<" ";
            q.push(NULL);
        }
        if(t && t->left)
            q.push(t->left);
        if(t && t->right)
            q.push(t->right);
    }
}
