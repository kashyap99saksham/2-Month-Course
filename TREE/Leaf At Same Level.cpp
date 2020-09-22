
// This returns level of preorder Node
int LeafLevel = 0;
void FindLevelOfLeaf(Node *root)        //Find the first lead level then campare with others
{
    if(!root)   return;
    while(root->left || root->right)
    {
        LeafLevel += 1;
        if(root->left)  
        {
            root=root->left;
            continue;
        }
        if(root->right)  
        {
            root=root->right;
            continue;
        }
    }
}
bool CheckAllLeaf(Node *root,int level)
{
    if(!root)   return true;
    if(!root->left && !root->right && level != LeafLevel) return false;
    level = level+1;
    return CheckAllLeaf(root->left,level) && CheckAllLeaf(root->right,level);
}
bool check(Node *root)
{
    LeafLevel = 0; 
    FindLevelOfLeaf(root);
    return CheckAllLeaf(root,0);
    // cout<<LeafLevel;
    // return false;
}