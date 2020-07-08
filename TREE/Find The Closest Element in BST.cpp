void MyFunc(Node *root, int K, int &minDiffVal)
{
    if(root==NULL)  return ;
    minDiffVal = min(abs(root->data - K) , minDiffVal);  
    if(K < root->data)
        MyFunc(root->left, K, minDiffVal);
    else
        MyFunc(root->right, K, minDiffVal);
}
int minDiff(Node *root, int K)
{
    int minDiffVal = INT_MAX;
    MyFunc(root, K, minDiffVal);
    return minDiffVal;
}
