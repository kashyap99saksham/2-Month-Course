void printNearNodes(Node *root, int low, int high,vector<int>&v)
{
    if(!root)   return;    
    printNearNodes(root->left,low,high,v);
    if(root->data>= low && root->data <= high)  
        v.push_back(root->data);
    printNearNodes(root->right,low,high,v);
}
vector<int> printNearNodes(Node *root, int low, int high)
{
    vector<int>v;
    printNearNodes(root,low,high,v);
    return v;
}
