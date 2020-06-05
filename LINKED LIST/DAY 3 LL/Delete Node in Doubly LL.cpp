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

void display(Node *headRef)
{
    Node *temp = headRef;
    while(temp)
    {
        cout<<temp->data;
        temp = temp->next;
    }
}

// Function to delete the node at position x
void deleteNode(Node **head_ref, int x)
{
    x = x-1;
    Node *temp = *head_ref;
    while(x--)
        temp = temp->next;
    if(temp->prev == NULL)
    {
        temp->next->prev = NULL;
        *head_ref = temp->next;
        free(temp);
    }
    else if(temp->next == NULL)
    {
        temp->prev->next = NULL;
        free(temp);
    }
    else
    {
        temp->prev->next = temp->next;
        temp->next->prev = temp->prev;
        free(temp);
    }
    
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

        deleteNode(&head,3);
        display(head);
    }
}
