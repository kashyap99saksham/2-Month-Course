int calculate(int l,string ex,int r)
{
    if(ex=="+") return (l)+(r);
    if(ex=="-") return (l)-(r);
    if(ex=="*") return (l)*(r);
    if(ex=="/") return (l)/(r);
}
int evalTree(node* root) 
{
    if(!root)   return -1;
    if(!root->left && !root->right) return stoi(root->data);
    int l = evalTree(root->left);
    int r = evalTree(root->right);
    return calculate(l,root->data,r);
    
    
}
