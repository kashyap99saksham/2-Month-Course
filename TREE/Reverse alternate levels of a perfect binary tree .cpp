void Helper(Node *r1, Node *r2,int level)
{
    if(!r1&&!r2)   return;
    if(level%2!=0)
        swap(r1->data,r2->data);
        
    level++;
    Helper(r1->left,r2->right,level);
    Helper(r1->right,r2->left,level);
}
void reverseAlternate(Node *root)
{
    if(!root)   return;
    if(!root->left&&!root->right)   return;
    int level = 1;
    Helper(root->left,root->right,level);
}