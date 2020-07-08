int height(Node* root, int &ans)
{ 
    if(!root)
        return INT_MIN;
    if(!root->left && !root->right)
        return root->data;
    int lheight = height(root->left,ans);
    int rheight = height(root->right,ans);
    
    if(root->left && root->right)
        ans =  max(root->data + lheight + rheight, ans);
    return max(lheight , rheight) + root->data;  
}
int maxPathSum(Node* root)
{
    int maxSum = INT_MIN;
    height(root,maxSum);
    return maxSum;
}
