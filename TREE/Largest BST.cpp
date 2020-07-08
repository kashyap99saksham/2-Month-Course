/*You are required to complete this method */
// Return the size of the largest sub-tree which is also a BST
bool CheckForBst(Node *t , int min , int max)
{
    if(t==NULL)
        return true;
    if(t->data <= min || t->data >= max)
        return false;
    bool l = CheckForBst(t->left , min , t->data);
    bool r = CheckForBst(t->right , t->data , max);
    return (l && r);
}
int CalculateSize(Node *t)
{
    if(t==NULL)
        return 0;
    int a = CalculateSize(t->left);
    int b = CalculateSize(t->right);
    return a + b + 1;
}
void TraverseTree(Node *t,int &maxi)
{
    if(t==NULL)
        return;
    bool bst = CheckForBst(t,INT_MIN,INT_MAX);
    if(bst)
    {
        int sizeOfTree = CalculateSize(t);
        maxi = max(sizeOfTree , maxi);
    }
        
    TraverseTree(t->left, maxi);
    TraverseTree(t->right, maxi);
    
}
int largestBst(Node *root)
{
    int maxi = 0;
    TraverseTree(root,maxi);
    return maxi;
}