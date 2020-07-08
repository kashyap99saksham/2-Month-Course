Node *createTree(int parent[], int n)
{
    Node *arr[n], *root;
    for(int i=0;i<n;i++)
        arr[i] = new Node(i);
    for(int i = 0 ;i<n ;i++)
    {
        if(parent[i] == -1)
            root = arr[i];
        else
        {
            Node *temp = arr[parent[i]];
            if(!temp->left) 
                temp->left = arr[i];
            else 
                temp->right = arr[i];
        }
    }
    return root;
    
}