void levelOrder(Node* node)
{
    if(!node)   return;
    queue<Node*>q;
    q.push(node);
    while(!q.empty())
    {
        int p = q.size();
        while(p--)
        {
            Node *temp = q.front();
            q.pop();
            cout<<temp->data<<" ";
            if(temp->left)  q.push(temp->left);
            if(temp->right) q.push(temp->right);
        }
        cout<<"$ ";
    }
}
