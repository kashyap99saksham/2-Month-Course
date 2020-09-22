// LEVEL ORDER ALSO WORKS
int CheckLevel(Node *root,int a,int lev)
{
    if(!root)   return -1;
    if(root->data==a)   return lev;
    lev++;
    int l = CheckLevel(root->left,a,lev);
    int r = CheckLevel(root->right,a,lev);
    if(l!=-1)   return l+1;
    if(r!=-1)   return r+1;
    else    return -1;
}
Node *FindLca(Node *root,int a,int b)
{
    if(!root)   return NULL;
    if(root->data==a||root->data==b)
        return root;
    Node *l = FindLca(root->left,a,b);
    Node *r = FindLca(root->right,a,b);
    if(!l&&!r)  return NULL;
    if(l&&r)    return root;
    return l ? l : r;
}
bool isCousins(Node *root, int a, int b)
{
   if(!root)    return false;
   int levelA = CheckLevel(root,a,0);
   int levelB = CheckLevel(root,b,0);
//   cout<<levelA<<" and "<<levelB<<" ";
   if(levelA!=levelB)   return false;
   Node *lca = FindLca(root,a,b);
   if(lca->left->data==a||lca->right->data==a)  return false;
   return true;
}