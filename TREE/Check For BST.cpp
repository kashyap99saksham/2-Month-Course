bool CheckingTree(Node *t,int min,int max)
{
    if(t == NULL)
        return true;
    if(t->data <= min || t->data >= max)
        return false;
    bool l = CheckingTree(t->left,min,t->data);
    bool r = CheckingTree(t->right,t->data,max);
    return (l && r);
}
CheckingTree(root,INT_MIN,INT_MAX); //Calling





