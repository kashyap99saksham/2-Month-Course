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

Node *getMiddle(Node *headRef)
{
    Node *slow=headRef,*fast=headRef,*PrevSlow=NULL;
    do
    {
        PrevSlow = slow;
        slow = slow->next;
        fast = fast->next->next;
    }while(fast != headRef && fast->next != headRef);
    if(fast == headRef)
        return PrevSlow;
    if(fast->next == headRef)
        return PrevSlow->next;
}

void splitList(Node *headRef,Node **headRef1,Node **headRef2)
{
    Node *PrevMid = getMiddle(headRef);
    Node *temp = PrevMid->next;
    do
    {
        temp = temp->next;
    }while(temp->next != headRef);
    temp->next = PrevMid->next;
    *headRef2 = PrevMid->next;
    PrevMid->next = headRef;
    *headRef1 = headRef;
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
        Node *head1=NULL,*head2=NULL;
        splitList(head,&head1,&head2);
        printCLL(head1);
        printCLL(head2);
    }
}