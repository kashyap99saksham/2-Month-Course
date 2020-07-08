void rightView(Node *root)
{
    if(root==NULL)  return;    
    queue<Node *> q;
    q.push(root);
    q.push(NULL);
    Node *prev;
    // cout<<root->data<<" ";
    while(!q.empty())
    {
        Node *t = q.front();
        q.pop();
        if(t == NULL)
        {
            cout<<prev->data<<" ";
        }
        if(t == NULL && !q.empty())
        {
            q.push(NULL);
        }
        if(t && t->left)
            q.push(t->left);
        if(t && t->right)
            q.push(t->right);
        prev = t;
    }
}

