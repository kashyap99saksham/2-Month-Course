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
        cout<<temp->data<<" ";
        temp = temp->next;
    }while(temp != headRef);
}

// 4 cases need to be handled
// 1) insert in empty
// 2) inserting at begining
// 3) inserting at end
// 4) inserting in middle
Node *sortedInsert(Node *headRef,int x)
{
    Node *newNode = new Node();
    newNode->data = x;

    if(headRef == NULL)         //For Empty List
    {
        headRef = newNode;
        newNode->next = headRef;
    }
    
    Node *temp = headRef;

    if(x <= headRef->data)      //At beg
    {
        do
        {
            temp = temp->next;
        } while (temp->next != headRef);
        temp->next = newNode;
        newNode->next = headRef;
        headRef = newNode;
    }
    else                  //Finding Suitable Position
    {
        temp = headRef;
        while(x > temp->next->data && temp->next != headRef)
        {
            temp = temp->next;
        }
        if(temp->next == headRef)       //At Last
        {
            temp->next = newNode;
            newNode->next  = headRef;
        }
        else        //At Middle
        {
            newNode->next = temp->next;
            temp->next = newNode;
        }
    } 
    return headRef;  
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
        int x;  cin>>x;
        head = sortedInsert(head,x);
        printCLL(head);
    }
}