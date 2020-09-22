// TRICK IS : NODES LEFT'S RIGHT AND NODES RIGHT'S LEFT IS POINTING TO ITSELF
int findTreeHeight(Node* root)
{
	if(!root)   return 0;
// 	if(!root->left&&!root->right)   return 1;  //if only one node in tree
// 	if(!root->left && root->right && root->right->left == root)     //here root->right is just edge case
//         return 1;
//     if(!root->right && root->left && root->left->right == root)     //here root->left is just edge case
//         return 1;
    if(root->left&&root->right&&root->left->right==root)    //No need to check for both side [root->right->left==root] .. Hence Remember it is circular
        return 1;
    int l = findTreeHeight(root->left);
    int r = findTreeHeight(root->right);
    return l>r ? l+1 : r+1;
}