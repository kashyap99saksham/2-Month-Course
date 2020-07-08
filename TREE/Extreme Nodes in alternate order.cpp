void printExtremeNodes(Node* root)
{
    if(root==NULL)  
        return ;
    vector<int>v;
    queue<Node *> q;
    q.push(root);
    q.push(NULL);
    Node *prev = root;
    while(!q.empty())
    {
        Node *curr = q.front();
        q.pop();

        if(prev == NULL)
        {
            v.push_back(curr->data);
            // cout<<curr->data<<" ";
        }
        if(curr == NULL)
        {
            v.push_back(prev->data);
            // cout<<prev->data<<" ";
        }
        if(curr == NULL && !q.empty())
            q.push(NULL);

        if(curr && curr->left)
            q.push(curr->left);

        if(curr && curr->right)
            q.push(curr->right);

        prev = curr;

    }
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
        if(i%2==1)
            i = i+2;
    }

}
