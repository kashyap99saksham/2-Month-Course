Node *MakingMirror(Node *t)
{
    if(t==NULL)
        return NULL;
    t->left = MakingMirror(t->left);
    t->right = MakingMirror(t->right);
    // Swapping of left and right
    Node *temp = t->left;
    t->left = t->right;
    t->right = temp;
    return t;
}
void mirror(Node* node) 
{
    node = MakingMirror(node);
}