void reversePrint(Node *root)
{
    if(!root)   return;
    queue<Node *>q;
    q.push(root);
    stack<Node*>stk;
    while(!q.empty())
    {
        int p = q.size();
        for(int i=0;i<p;i++)
        {
            Node *temp = q.front();
            q.pop();
            stk.push(temp);
            if(temp->right) q.push(temp->right);
            if(temp->left) q.push(temp->left);
        }
    }
    while(!stk.empty())
    {
        cout<<stk.top()->data<<" ";
        stk.pop();
    }
}