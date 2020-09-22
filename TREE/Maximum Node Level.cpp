int maxNodeLevel(Node *root)
{
    if(!root)   return -1;
    queue<Node *> q;
    q.push(root);
    int width = 0;
    int level = 0;
    int ans = -1;   
    while(!q.empty())   
    {
        int p = q.size();
        if(max(width,p) > width)   ans = level;
        width = max(width,p);
        for(int i=0;i<p;i++)
        {
            Node *temp = q.front(); q.pop();
            if(temp->left)  q.push(temp->left);
            if(temp->right)  q.push(temp->right);
        }
        level++;
    }
    return ans;
}