void InorderInsert(Node *root , vector<int> &v)
{
    if(root==NULL)
    {
        return;
    }
    InorderInsert(root->left,v);
    v.push_back(root->data);
    InorderInsert(root->right,v);
}
vector<int> merge(Node *root1, Node *root2)
{
    vector<int> v1,v2;
    InorderInsert(root1,v1);
    InorderInsert(root2,v2);
    vector<int>v3(v1.size()+v2.size());
    merge(v1.begin(),v1.end(),v2.begin(),v2.end(),v3.begin());          //Really helpfullllll
    return v3;
}