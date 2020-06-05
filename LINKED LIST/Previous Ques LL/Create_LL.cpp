#include<bits/stdc++.h>
using namespace std;
class node{
    public:
        int data;
        node* next;
};
int main()
{
    node *head=NULL, *second=NULL,*third=NULL;
    head=new node();
    second=new node();
    third=new node();
    head->data=5;
    head->next=second;
    second->data=6;
    second->next=third;
    third->data=7;
    third->next=NULL;

    // Traverse
    node *temp;
    temp = head;
    while(temp!=NULL)
    {
        cout<<temp->data;
        temp=temp->next;
    }
} 