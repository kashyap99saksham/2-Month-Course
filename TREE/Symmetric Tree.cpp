
bool isSymmetric(Node *r1,Node *r2)
{
    if(!r1 && !r2)   return true;
    if(r1 && !r2 || !r1 && r2)  return false;
	if(r1 && r2 && r1->data!=r2->data)  return false;
	return (isSymmetric(r1->left,r2->right) && isSymmetric(r1->right,r2->left));
}
bool isSymmetric(struct Node* root)
{
    return isSymmetric(root,root);
}
