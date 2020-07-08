/* Should return minimum distance between a and b
   in a tree with given root*/
Node* LCA(Node *root, int n1, int n2)
{
    if(root==NULL)  
        return NULL;
    if(root->data == n1 ||root->data == n2)
        return root;
    Node *left = LCA(root->left,n1,n2);
    Node *right = LCA(root->right,n1,n2);
    if(!left && !right)
        return NULL;

    if(left && right)
        return root;
        
    return left ? left : right;

}

int FindDistFromRoot(Node *t,int x)
{
    if(t==NULL)
        return 0;
    if(t->data == x)
    {
        return 1;
    }
    int a = FindDistFromRoot(t->left,x);
    int b = FindDistFromRoot(t->right,x);
    if(a==0 && b==0)
        return 0;
    return (a != 0) ? a+1 : b+1;
}
int findDist(Node* root, int a, int b) 
{
    if(root==NULL)  return 0;
    Node *Lca = LCA(root,a,b);
    return FindDistFromRoot(Lca,a) + FindDistFromRoot(Lca,b) - 2;       //taking -2 coz distance func gives 1 extra distance 
}