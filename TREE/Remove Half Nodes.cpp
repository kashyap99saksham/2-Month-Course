Node *RemoveHalfNodes(Node *root)
{
    if(!root)   return NULL;
    if(!root->left&&!root->right)   return root;
    root->left = RemoveHalfNodes(root->left);
    root->right = RemoveHalfNodes(root->right);
    if(root->left&&root->right) return root;
    // We Can Also Free memory [Make interviewer happy]
    return (root->left) ? root->left : root->right;
}