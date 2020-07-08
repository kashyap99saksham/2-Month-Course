int MytoSumTree(Node *node)
{
    if(!node)   return 0;
    if(!node->left && !node->right)
    {
        int leaf = node->data;
        node->data = 0;
        return leaf;
    }
    int lSum = MytoSumTree(node->left);
    int rSum = MytoSumTree(node->right);
    int val = lSum + rSum + node->data;
    node->data = lSum + rSum;
    return val;
}

void toSumTree(Node *node)
{
    MytoSumTree(node);
}

