static int diff = INT_MIN;
int Finder(Node *root)
{
    if(root==NULL)  
        return INT_MAX;
    int left = Finder(root->left);
    int right = Finder(root->right);
    if(root->left || root->right)
    {
        diff = max( (diff) , (root->data - min(left,right) ) ); 
       return min(root->data , min(left,right));
    }
    return root->data;
}
int maxDiff(Node* root)
{
    diff = INT_MIN;
    Finder(root);
    return diff;
}
