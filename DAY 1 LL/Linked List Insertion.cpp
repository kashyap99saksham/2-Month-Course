#include<bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    Node *next;
};

Node* insert_beg(int data,Node *headRef)
{
    Node *newNode = new Node;
    newNode->data = data;
    if(headRef == NULL)
    {
        newNode->next = NULL;
        headRef = newNode;
        return headRef;
    }
    else
    {
        newNode->next = headRef;
        headRef = newNode;
        return headRef;
    }
}
Node* insert_end(int data,Node *headRef)
{
    Node *newNode = new Node;
    newNode->data = data;
    if(headRef == NULL)
    {
        newNode->next = NULL;
        headRef = newNode;
        return headRef;
    }
    else
    {
        newNode->next = NULL;
        Node *temp = headRef;
        while (temp->next != NULL)
            temp = temp->next;

        temp->next = newNode;
        return headRef;
    }
}

void printList(Node *headRef)
{
    Node *temp = headRef;
    while (temp != NULL)
    {
        cout<<temp->data;
        temp = temp->next;
    }
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
            int choice; cin>>choice;
            if(choice == 0)
                head = insert_beg(data,head);
            else
                head = insert_end(data,head);
        }
        printList(head);
    }
}