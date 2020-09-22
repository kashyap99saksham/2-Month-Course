int areMirror(Node* a, Node* b) 
{
    if(!a&&!b)  return true;
    if(a&&!b||b&&!a)    return false;
    if(a&&b&&a->data!=b->data)  return false;
    return areMirror(a->left,b->right)&&areMirror(a->right,b->left);
}
