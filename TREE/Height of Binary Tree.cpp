int height(Node* root)
{
    if(root==NULL)       
        return 0;
    else
    {
        int a,b;
        a = height(root->left);
        b = height(root->right);
        return (a > b) ? a+1 : b+1;
    }

}
