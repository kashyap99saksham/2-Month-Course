#include<bits/stdc++.h>
using namespace std;
struct Node
{
    Node *left;
    int data;
    Node *right;
};
Node *InsertIterative(Node *t,int key)
{
    Node *temp;
    temp = new Node;
    temp->data = key;
    temp->left = temp->right = NULL;
    
    if(t == NULL)
        return temp;
    else
    {
        while(1)
        {
            if(key == t->data)  return NULL; 

            if(key < t->data)
            {
                if(t->left == NULL)
                {
                    t->left = temp;
                    return NULL; 
                }
                else
                    t = t->left;
            }
            if(key > t->data)
            {
                if(t->right == NULL)
                {
                    t->right = temp;
                    return NULL; 
                }
                else
                    t = t->right;
            }
        }

    }
}

Node *InsertRec(Node *t,int key)
{
    if(t == NULL)
    {
        Node *temp = new Node;
        temp->data = key;
        temp->left = temp->right = NULL;
        return temp;
    }
    else
    {
        if(key < t->data)
            t->left = InsertRec(t->left,key);
        if(key > t->data)
            t->right = InsertRec(t->right,key);
        return t;
    }
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


int Height(struct Node *p)
{
    int x,y;
    if(p == NULL)
        return 0;
    x = Height(p->left);
    y = Height(p->right);
    return x > y ? x + 1 : y + 1;
}

struct Node *InPre(Node *p)
{
    while(p && p->right != NULL)
        p = p-> right;
    return p;
}
struct Node *InSucc(Node *p)
{
    while(p && p->left != NULL)
        p = p->left;
    return p;
}
Node *deleteNode(Node *t,int key)
{
    struct Node *q;
    if(t == NULL)       //If No Tree Present At ol || Or delete Node is not find
        return NULL;
    if(t->data == key && t->left == NULL && t->right == NULL)
    {
        free(t);
        return NULL;
    }

    if(key < t->data)
        t->left = deleteNode(t->left,key);
    if(key > t->data)
        t->right = deleteNode(t->right,key);
    if(key == t->data)        //It means Key is Found But having Childs || Delete that Node || OR Replace it with Inorder Predcs ,Succesr
    {
        if(Height(t->left) > Height(t->right))
        {
            q = InPre(t->left);
            t->data = q->data;
            t->left = deleteNode(t->left,q->data);
        }
        else
        {
            q = InSucc(t->right);
            t->data = q->data;
            t->right = deleteNode(t->right,q->data);
        }
    }
    return t;           //Very Imp Coz when recursion will in return phase then it will set updated right and left
}   
int main()
{
    Node *root = NULL;
    // root = InsertIterative(root,30);
    // InsertIterative(root,20);
    // InsertIterative(root,40);
    // InsertIterative(root,25);
    // InsertIterative(root,10);
    root = InsertRec(root,30);
    InsertRec(root,20);
    InsertRec(root,90);
    InsertRec(root,25);
    InsertRec(root,10);
    deleteNode(root,30);
    Inorder(root);
    
}