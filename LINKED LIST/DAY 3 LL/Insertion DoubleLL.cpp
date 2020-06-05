#include<bits/stdc++.h>
using namespace std;
struct Node
{
    int data;
    Node *next,*prev;
};

Node *append(Node *headRef,int data)
{
    Node *newNode = new Node();
    newNode->data = data;
    newNode->next = NULL;   

    if(headRef==NULL)
    {
        newNode->prev = NULL;
        headRef = newNode;
    }
    else
    {
        Node *temp = headRef;
        while(temp->next)
            temp = temp->next;
        
        newNode->prev = temp;
        temp->next = newNode;
    }
    return headRef;
}

Node *push(Node *headRef,int data)
{
    Node *newNode = new Node();
    newNode->data = data;
    newNode->prev = NULL;
    if(headRef==NULL)
    {
        newNode->next = NULL;
        headRef = newNode;
    }
    else
    {
        newNode->next = headRef;
        headRef->prev = newNode;
        headRef = newNode;
    }
    return headRef;
}

void display(Node *headRef)
{
    Node *temp = headRef;
    while(temp)
    {
        cout<<temp->data;
        temp = temp->next;
    }
}
Node *insertBefore(Node *headRef,Node *givenNode, int data)
{
    Node *newNode = new Node();
    newNode->data = data;
    newNode->prev = givenNode->prev;
    
    newNode->next = givenNode;
    if(newNode->prev != NULL)
        givenNode->prev->next = newNode;
    else
        headRef = newNode;

    givenNode->prev = newNode;
    return headRef;
    
}

Node *insertAfter(Node *headRef,Node *givenNode,int data)
{
    Node *newNode = new Node();
    newNode->data = data;
    newNode->prev = givenNode;
    newNode->next = givenNode->next;
    if(givenNode->next != NULL)
        givenNode->next->prev = newNode;
    givenNode->next = newNode;
    return headRef; 
}
int main()
{
    int t;  cin>>t;
    while(t--)
    {
        Node *head = NULL;

        head = append(head,6);          //Insert At End
        head = append(head,7);          //Insert At End
        head = append(head,8);          //Insert At End
        head = append(head,9);          //Insert At End

        head = push(head,5);        //Insert At Beg   
        head = push(head,4);        //Insert At Beg   
        head = push(head,3);        //Insert At Beg   
        head = push(head,2);        //Insert At Beg   
        head = push(head,1);        //Insert At Beg

        Node *givenNode = head;
        while(givenNode->data!=6)
            givenNode = givenNode->next;
        head = insertBefore(head,givenNode,-6);

        givenNode = head;
        while(givenNode->data!=8)
            givenNode = givenNode->next;
        head = insertAfter(head,givenNode,-9);
        display(head);
    }
}