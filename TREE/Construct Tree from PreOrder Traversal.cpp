                        // using reference coz i have to always go ahead
Node *MyconstructTree(int &i, int n, int pre[], char preLN[])
{
    if(i >= n)          //MOST IMPORTANT CONDITION TO CHECK || 
        return NULL;                                        //IF TC IS : 10 5
                                                                //       N  L   
    Node *root = new Node(pre[i]);
    if(preLN[i] == 'L')
    {
        root->left = root->right = NULL;
        return root;
    }
    else
    {
        i++;
        root->left = MyconstructTree(i,n,pre,preLN);
        i++;
        root->right = MyconstructTree(i,n,pre,preLN);           //HERE I AM ALWAYS EAGER TO CREATE ITS RIGHT BUT IF NOT GIVEN... THATS WHY CHECK i>=n return NULL
    }
    return root;
}
Node *constructTree(int n, int pre[], char preLN[])
{
    int i = 0;   
    return MyconstructTree(i,n,pre,preLN);
}