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

void printList(Node *headRef)
{
    Node *temp = headRef;
    while (temp != NULL)
    {
        cout<<temp->data;
        temp = temp->next;
    }
}

int getNthFromLast(Node *headRef,int n)
{
    if(headRef == NULL)
        return 0;
    Node *fast = headRef;
    Node *slow = headRef;
    for (int i = 0; i < n; i++)
    {
        fast = fast->next;
        if(i<n-1 && fast == NULL)
            return -1;
    }
        
    while (fast!=NULL)
    {
        slow = slow->next;
        fast = fast->next;
    }
    // cout<<slow->data;
    return slow->data;
}


int main()
{
    int t;  cin>>t;
    while(t--)
    {
        int size;   cin>>size;
        int n;  cin>>n;
        Node *head = NULL;
        while(size--)
        {
            int data;   cin>>data;
            head = insert_end(data,head);
        }
        cout<<getNthFromLast(head,n);
        // printList(head);
    }
}