int helper(Node *root,bool &Balanced)
{
    if(!root)   return 0;
    int l = helper(root->left,Balanced);
    int r = helper(root->right,Balanced);
    if(abs(l - r) >=2)   Balanced = false;
    return l > r ? l+1 : r+1;
    
}
bool isBalanced(Node *root)
{
    bool Balanced = true; 
    helper(root,Balanced);
    return Balanced;
}
