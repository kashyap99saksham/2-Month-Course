#include<bits/stdc++.h>
using namespace std;
struct Node
{
    Node *left = NULL;
    int data;
    int hight;
    Node *right = NULL;
};
int NodeHight(Node *t)
{
    // Return The max of left hight and right hight child + 1(itself)
    int lh,rh;
    lh = (t && t->left) ? t->left->hight : 0;
    rh = (t && t->right) ? t->right->hight : 0;
    return lh > rh ? lh + 1 : rh + 1;           
}
int BalanceFactor(Node *t)
{
    int lh,rh;
    lh = (t && t->left) ? t->left->hight : 0;
    rh = (t && t->right) ? t->right->hight : 0;
    return lh - rh;           
}

// This Function Return Balanced Tree root
Node *LLRotation(Node *t)
{
    Node *tl = t->left;             //tl = t's left
    Node *tlr = tl->right;           //tle = t's left's right
    t->left = tlr;
    tl->right = t;

    t->hight = NodeHight(t);
    tl->hight = NodeHight(tl);

    return tl;      //Now tl becomes root in this tree or subtree 

}
Node *LRRotation(Node *t)
{
    Node *tl = t->left;
    Node *tlr = tl->right;

    tl->right = tlr->left;
    t->left = tlr->right;

    tlr->left = tl;
    tlr->right = t;
    
    t->hight = NodeHight(t);
    tl->hight = NodeHight(tl);
    tlr->hight = NodeHight(tlr);

    return tlr;
}
Node *RRRotation(Node *t)
{
    Node *tr = t->right;
    Node *trl = tr->left;

    t->right = trl;
    tr->left = t;

    t->hight = NodeHight(t);
    tr->hight = NodeHight(tr);

    return tr;
}
Node *RLRotation(Node *t)
{
    Node *tr = t->right;
    Node *trl = tr->left;

    t->right = trl->left;
    tr->left = trl->right;

    trl->left = t;
    trl->right = tr;

    t->hight = NodeHight(t);
    tr->hight = NodeHight(tr);
    trl->hight = NodeHight(trl);

    return trl;
}
Node *insertRec(Node *t,int key)
{
    if(t == NULL)
    {
        Node *temp = new Node;
        temp->data = key;
        temp->hight = 1;
        return temp;
    }
    if(key < t->data)
        t->left = insertRec(t->left,key);
    if(key > t->data)
        t->right = insertRec(t->right,key);
        
    // Before Return Node Update Its Height
    t->hight = NodeHight(t);

    // Now Check Its Balanced Factor
    if(BalanceFactor(t) == 2)       // It Means Tree Is Heavy From Left Side 
    {
        if(BalanceFactor(t->left) == 1)     //It Means Tree is Heavy Left Left LL
            return LLRotation(t);
        if(BalanceFactor(t->left) == -1)     //It Means Tree is Heavy Left Right LR
            return LRRotation(t);
    }
    if(BalanceFactor(t) == -2)       // It Means Tree Is Heavy From Right Side 
    {
        if(BalanceFactor(t->right) == 1)     //It Means Tree is Heavy Right Left RL
            return RLRotation(t);
        if(BalanceFactor(t->right) == -1)     //It Means Tree is Heavy Right Right RR
            return RRRotation(t);
    }
    return t;

}
void Inorder(Node *t)
{
    if(t==NULL)
        return;
    else
    {
        Inorder(t->left);
        cout<<t->data<<" ";
        Inorder(t->right);
    }
}
int main()
{
    Node *root = NULL;
    root = insertRec(root,5);
    root = insertRec(root,67);
    root = insertRec(root,33);
    root = insertRec(root,32);
    root = insertRec(root,11);

    Inorder(root);

}