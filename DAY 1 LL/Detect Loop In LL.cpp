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

int detectloop(Node* headRef) 
{ 
    Node *slow_p = headRef, *fast_p = headRef; 
  
    while (slow_p && fast_p && fast_p->next) { 
        slow_p = slow_p->next; 
        fast_p = fast_p->next->next; 
        if (slow_p == fast_p) { 
            cout << "Found Loop"; 
            return 1; 
        } 
    } 
    return 0; 
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
        int connectNode;    cin>>connectNode;

        // Create LOOP
        if(connectNode > 0) 
        {
            Node *temp = head;
            for (int i = 1; i < connectNode; i++)
            {
                temp = temp->next;
            }
            Node *last = head;
            while(last->next)
                last = last->next;          //Reach at last
            last->next = temp;
            // cout<<last->data; 
            
        }
        int g = detectloop(head);
        if(g)   cout<<"True\n";
        else cout<<"False\n";
    }
}