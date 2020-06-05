#include<bits/stdc++.h>
using namespace std;
struct Node {
    int data;
    Node *next;
};
Node *append(int data,Node *headRef)
{
    Node *newNode = new Node;
    newNode->data = data;
    newNode->next = NULL;
    if(headRef==NULL)
    {
        headRef = newNode;
        return headRef;
    }
    Node *temp = headRef;
    while(temp->next)
        temp = temp->next;
    temp->next = newNode;
    return headRef;
}

void display(Node *headRef)
{
    Node *temp = headRef;
    while (temp != NULL)
    {
        cout<<temp->data;
        temp = temp->next;
    }
}
Node *removeDuplicate(Node* headRef)
{
    Node *temp = headRef;
    while(temp && temp->next)
    {   
        if(temp->next->data == temp->data)
        {
            free(temp->next);
            temp->next = temp->next->next;
        }
        else
        {
            temp = temp->next;
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
            int new_data;   cin>>new_data;
            head = append(new_data,head);
        }
        removeDuplicate(head);
        display(head);
    }
}