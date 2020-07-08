int checking(Node *t, bool &ans)
{
    if(t == NULL)
        return 0;
    int lsum = checking(t->left , ans);
    int rsum = checking(t->right , ans);
    if(lsum + rsum != 0 && lsum + rsum != t->data)
        ans = false;
    return lsum + rsum + t->data;
    
}

bool isSumTree(Node* root)
{
    bool ans = true;
    checking(root , ans);
    return ans;
}