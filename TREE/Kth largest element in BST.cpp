int MykthLargest(Node *root, int &K)
{
    if(!root || K < 1)    return -1;
    int r = MykthLargest(root->right,K);
    if(K-- == 1)
    {
        return root->data;
    }
    int l = MykthLargest(root->left,K);
    if(l == -1 && r == -1)  return -1;
    return (l != -1) ? l : r;
}
int kthLargest(Node *root, int K)
{
    return MykthLargest(root,K);   
}