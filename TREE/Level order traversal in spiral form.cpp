void printSpiral(Node *root)
{
    if(!root)   return;
    queue<Node *> q;
    q.push(root);
    int level = 1;
    stack <int> stk;
    int p = 0;
    while(!q.empty())
    {
        p = q.size();
        for(int i=0;i<p;i++)
        {
            Node *temp = q.front();
            q.pop();
            if(temp->left)
                q.push(temp->left);
            if(temp->right)
                q.push(temp->right);
            if(level % 2 != 0)  
                stk.push(temp->data); 
            else
                cout<<temp->data<<" ";    
        }
        while(!stk.empty())
        {
            cout<<stk.top()<<" ";
            stk.pop();
        }
        level++;
    }
}
