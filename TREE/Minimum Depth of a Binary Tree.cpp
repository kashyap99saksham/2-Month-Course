int minDep = INT_MAX;
void Helper(Node *node,int depth)
{
    if(!node)   return;
    if(!node->left && !node->right)   
        minDep = min(minDep,depth);
    depth = depth+1;
    Helper(node->left,depth);
    Helper(node->right,depth);
}
int minDepth(Node *node) {
    minDep = INT_MAX;
    Helper(node,1);
    return minDep;
}
