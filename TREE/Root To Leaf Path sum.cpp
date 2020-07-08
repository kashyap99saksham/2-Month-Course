bool Checker(Node *node,int sum, int &s)
{
    if(!node)   return false;
    s = s + node->data;
    if(!node->left && !node->right)
    {
        if(s == sum)    
            return true;
        else
        {
            s = s - node->data;
            return false;
        }
    }
    bool left = Checker(node->left,sum,s);
    bool right = Checker(node->right,sum,s);
    if(!left && !right)
    {
        s = s - node->data;
        return false;
    }
    return (left || right);
}
bool hasPathSum(Node *node, int sum)
{
    int s = 0;
    return Checker(node,sum,s);
}