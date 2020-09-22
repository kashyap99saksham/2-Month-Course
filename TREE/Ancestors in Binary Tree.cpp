bool printAncestors(struct Node *root, int target)
{
    if(!root)   return false;
    if(root->data == target)
        return true;
    bool left = printAncestors(root->left,target);
    bool right = printAncestors(root->right,target);
    if(!left && !right) return false;
    // else
    // {
        cout<<root->data<<" ";
        return left ? left : right;         //We Can return True directly also
    // }
}