/*this  function serializes 
the binary tree and stores 
it in the vector A*/
void serialize(Node *root,vector<int> &A)
{
    if(root==NULL)
    {
        A.push_back(-1);
        return;
    }
    A.push_back(root->data);
    serialize(root->left,A);
    serialize(root->right,A);
}

/*this function deserializes
 the serialized vector A*/
int i = 0; 
Node * MydeSerialize(vector<int> &A)
{
    if(A[i] == -1)
    {
        i++;
        return NULL;
    }
    Node *root = new Node(A[i++]);
    root->left = MydeSerialize(A);
    root->right = MydeSerialize(A);
    return root;
}
Node * deSerialize(vector<int> &A)
{
    i = 0;
    return MydeSerialize(A);
}