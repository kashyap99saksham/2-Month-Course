// BEST SOLUTION EVER

void printCorner(Node *root)
{
    if(root==NULL) return ;
    
    queue<Node*> q;
    q.push(root);
    int p=0;
    while(!q.empty()) 
    {
        p = q.size();
        for(int i=1;i<=p;i++) 
        {
            root = q.front();
            q.pop();
            if(i==1 || i==p) {
                cout<<root->key<<" ";
            }
            if(root->left)
                q.push(root->left);
            if(root->right)
                q.push(root->right);
        }
    }
}


