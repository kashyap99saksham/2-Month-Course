map<int,int>m;
void SetDiagonal(Node *root,int dig)
{
    if(!root)   return;
    m[dig] += root->data;
    SetDiagonal(root->left,dig+1);
    SetDiagonal(root->right,dig);
    return;
}
vector <int> diagonalSum(Node* root) 
{
    vector<int>v;
    if(!root)   return v;
    m.clear();
    SetDiagonal(root,0);
    for(auto i : m)
    {
        v.push_back(i.second);
    }
    return v;
}