// In This we are detect Loop with hashing
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
int getCount(Node *n)
{
    int count = 1;
    Node *a = n;
    while(a->next != n)
    {
        a = a->next;
        count++;
    }
    return count;
}
int detectLoop(Node *headRef)
{
    Node *temp = headRef;
    unordered_set<Node *> s;
    while (temp)
    {
        if(s.find(temp) != s.end())
        {
            return getCount(temp);
        }
        s.insert(temp);
        temp = temp->next;
    }
    return -1;
    
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
            for (int i = 0; i < connectNode; i++)
            {
                temp = temp->next;
            }
            Node *last = head;
            while(last->next)
                last = last->next;          //Reach at last
            last->next = temp;
        }
        cout<<detectLoop(head);
    }
}