int MyFunc(Node *root, int k,bool &flag)
{
    if(root==NULL)  
        return 0;
    else
    {
        int l = MyFunc(root->left,k,flag);
        int r= MyFunc(root->right,k,flag);
        if(l+r==k)
        {
            flag = true;
            cout<<root->data<<" ";
        }
        if(!root->left && !root->right)
            return l+r+1;
        return l+r;
    }
}

void btWithKleaves(Node *ptr, int k)
{ 
    bool f = false;
    MyFunc(ptr,k,f);
    if(!f)  cout<<"-1";
    cout<<"\n";
}
