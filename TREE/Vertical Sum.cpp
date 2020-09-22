// BEST APPROCH MUST DO 
map<int,int>m;
void Helper(Node *root,int hd)
{
    if(!root)   return;
    m[hd] += root->data;
    Helper(root->left,hd-1);
    Helper(root->right,hd+1);
}
vector <int> verticalSum(Node *root) 
{
    vector<int> v;
    if(!root)   return v;
    m.clear();
    Helper(root,0);
    for(auto i : m)
        v.push_back(i.second);
    return v;
}