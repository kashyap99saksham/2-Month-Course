// Right Approch But Order Doesnot Match {Need Level Order || Sorted Order}
Node *PrintSiblings(Node *t, bool &flag)
{
    if(t==NULL)
        return NULL;
    
    if(t->left == NULL && t->right)
    {
        flag = true;
        cout<<t->right->data<<" ";
    }
    if(t->right == NULL && t->left)
    {
        flag = true;
        cout<<t->left->data<<" ";
    }
        
    t->left = PrintSiblings(t->left,flag);
    t->right = PrintSiblings(t->right,flag);
    
    return t;
}
void printSibling(Node* node)
{
    bool flag = false;
    PrintSiblings(node,flag);
    if(!flag)
        cout<<-1;
}