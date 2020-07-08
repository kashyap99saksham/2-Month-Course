void connect(Node *t)
{
    if(t == NULL) return;
    queue<Node *>q;
    q.push(t);
    q.push(NULL);
    Node *prev=NULL;
    while(!q.empty())
    {
        Node *temp = q.front();
        q.pop();
        
        if(prev)
            prev->nextRight = temp;
        
        if(temp == NULL && !q.empty())
        {
            q.push(NULL);
            // continue;
        }
        if(temp && temp->left)
        {
            q.push(temp->left);
        }
        if(temp && temp->right)
        {
            q.push(temp->right);
        }
        prev = temp;
   }
}

