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

int getMiddle(Node *headRef)
{
   Node *fast = headRef;
   Node *slow = headRef;
    while (fast)
    {
        fast = fast->next->next;
        slow = slow->next;
    }
    return slow->data;
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
            head = insert_end(data,head);
        }
        cout<<getMiddle(head);
        // printList(head);
    }
}