#include<bits/stdc++.h>
using namespace std;
struct Node{
    int data;   
    Node *next;
};
void Append(int new_data,Node **head)
{
    Node *new_node = new Node();
    new_node->data = new_data;
    new_node->next = NULL;
    Node *temp = *head;
    if (*head == NULL)  
    {  
        *head = new_node;  
        return;  
    }
    while (temp->next != NULL)
        temp = temp->next;
    temp->next = new_node;    
}
void Insert_Beg(int new_data,Node **head)
{
    Node *new_node = new Node();
    new_node->data = new_data;
    new_node->next = *head;
    *head = new_node;
}
void Insert_After(Node **beforeNode,int new_data)
{
    Node *new_node = new Node();
    new_node->data = new_data;

    Node *temp = *beforeNode;

    new_node->next = temp->next;
    temp->next = new_node;
}
void Display(Node **head)
{ 
    Node *temp = *head;
    while(temp!=NULL)
    {
        cout<<temp->data;
        temp=temp->next;
    }
}
int main()
{
    Node *head=NULL;
    Append(5,&head);
    Append(6,&head);
    Append(7,&head);
    Append(8,&head);
    Insert_Beg(4,&head);

    // Insert 8 after 5
    Node *before = head;

    while(before->data == 5)
        before=before->next;
    
    Insert_After(&before->next,8);
    Display(&head);
}