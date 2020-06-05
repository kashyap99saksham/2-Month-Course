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
        cout<<temp->data;
        temp = temp->next;
    }while(temp != headRef);
}

Node *deleteByM(Node *HeadRef,int m)
{
    Node *ptr1 = HeadRef,*ptr2 = HeadRef;
    while (ptr1->next != ptr1)
    {
        int count = 1; 
        while (count != m) 
        { 
            ptr2 = ptr1;
            ptr1 = ptr1->next;
            count++; 
        }
        ptr2->next = ptr1->next;
        free(ptr1);
        ptr1 = ptr2->next;
    }
    return ptr1;    
}

void getJosephusPosition(int n,int m)
{
    Node *head = NULL;
    int total = n;
    for(int i=1;i<=n;i++)
        head = createCLL(head,i);
    head = deleteByM(head,m);
    printCLL(head);    
} 

int main()
{
    int t;  cin>>t;
    while(t--)
    {
        int n,m;    cin>>n>>m;
        getJosephusPosition(n,m);
         
    }
}