#include<bits/stdc++.h>
using namespace std;
struct Node
{
    Node *left;
    int data;
    Node *right;
};
Node *createTree(Node *root)
{
    root = new Node;
    cout<<"Enter Root\n";
    cin>>root->data;
    root->left = NULL;  root->right = NULL;
    queue <Node *> q;
    q.push(root);
    while (!q.empty())
    {
        Node *t = q.front();
        q.pop();
        int lft;    cout<<"Enter Left Child of "<< t->data; cin>>lft;
        if(lft != -1)
        {
            Node *temp1 = new Node;
            temp1->data = lft;
            temp1->left = temp1->right = NULL;
            t->left = temp1;
            q.push(temp1);
        }
        int rgt;    cout<<"Enter Right Child of "<<t->data; cin>>rgt;
        if(rgt != -1)
        {
            Node *temp2 = new Node;
            temp2->data = rgt;
            temp2->left = temp2->right = NULL;
            t->right = temp2;
            q.push(temp2);
        }
    }    
    return root;
}

void display(Node *root)
{
    if(root)
    {
        cout<<root->data<<" ";
        display(root->left);
        display(root->right);
    }
}
int main()
{
    Node *root = NULL;
    root = createTree(root);
    display(root);
}


















