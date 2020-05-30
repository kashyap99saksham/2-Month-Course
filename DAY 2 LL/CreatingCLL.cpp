#include<bits/stdc++.h>
using namespace std;
struct Node
{
    int data;
    Node *next;
};
Node *createCLL(Node *headRef,int data)
{
    Node *newNode = new Node;
    newNode->data = data;
    if(headRef==NULL)
        headRef = newNode;
    else
    {
        Node *temp = headRef;
        while(temp->next != headRef)
            temp = temp->next;
        temp->next = newNode;
    }
    newNode->next = headRef;
    return headRef;
}
void printCLL(Node *headRef)
{
    Node *temp = headRef;
    do
    {
        cout<<temp->data;
        temp = temp->next;
    }while(temp != headRef);
}

int main()
{
    int t;  cin>>t;
    while(t--)
    {
        int size;   cin>>size;
        Node *head = NULL;
        while(size--)
        {
            int data;   cin>>data;
            head = createCLL(head,data);
        }
        printCLL(head);
    }
}