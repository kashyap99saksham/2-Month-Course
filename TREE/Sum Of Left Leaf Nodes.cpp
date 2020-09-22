void Helper(Node *root,int &sum)
{
    if(!root)   return;
    if(root->left && !root->left->left && !root->left->right)   sum+=root->left->data;
    Helper(root->left,sum);
    Helper(root->right,sum);
}
int leftLeavesSum(Node *root)
{
    int sum = 0;
    Helper(root,sum);
    return sum;
}