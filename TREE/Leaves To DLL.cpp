Node *convertToDLL(Node *root,Node * &head)
{
    static Node *prev = NULL;
    if(!root)   return NULL;
    if(!root->left && !root->right)
    {
        if(!head) 
            head = root;
        else
        {
            root->left=prev;
            prev->right=root;
        }
        prev=root;
        return NULL;
    }
    root->left = convertToDLL(root->left, head);
    root->right = convertToDLL(root->right, head);
    return root;
     
}
Node *convertToDLL(Node *root)
{
    Node *head = NULL;
    convertToDLL(root,head);
    return head;
}