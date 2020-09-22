#include<bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    Node *next;
};

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

Node* deleteNode(Node *headRef,int position)
{

    // Base Condition
    if(headRef == NULL || (headRef->next == NULL && position == 1))
        return NULL;

    if(position == 1)
    {
        headRef = headRef->next;
        return headRef;
    }

    Node *temp = headRef;
    Node *prev = NULL;

    position -= 1;
    while(position--)
    {
        prev = temp;
        temp = temp->next;
    }
    prev->next = temp->next;
    return headRef;
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
        while(size--)       //Creating LL
        {
            int data;   cin>>data;
            head = insert_end(data,head);
        }
        int deleteNodePos;  cin>>deleteNodePos;
        head = deleteNode(head,deleteNodePos);
        printList(head);
    }
}