void Helper(Node *root,vector<int>&v)
{
    if(!root)   return;
    v.push_back(root->data);
    if(!root->left&&!root->right)  
    {
        for(auto i : v) cout<<i<<" ";
        v.pop_back();
        cout<<"#";
        return;
    }
    Helper(root->left,v);
    Helper(root->right,v);
    v.pop_back();
}
void printPaths(Node* root)
{
    vector<int>v;
    Helper(root,v);
    cout<<endl;
}