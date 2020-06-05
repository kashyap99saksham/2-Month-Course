void btoCll (Node *root, Node **head)
{
    static Node *prev = NULL;
    if(!root)   
        return;
    btoCll (root->left,head);
    if(!(*head))
        *head=root;
    else
    {
        root->left=prev;
        prev->right=root;
    }
    prev=root;
    btoCll(root->right,head);

}


Node *bTreeToCList(Node *root)
{
    Node *head = NULL;
    btoCll(root,&head);

    Node *p=head;

    while(p->right)
        p=p->right;

    p->right=head;
    head->left=p;


    return head;


}
