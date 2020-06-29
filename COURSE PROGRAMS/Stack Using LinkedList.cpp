#include<bits/stdc++.h>
using namespace std;
struct Node 
{
    int data;
    Node *next;
};

void push(Node **top, int val)
{
    Node *newNode = new Node;
    if(newNode == NULL)     //Since in linked list there is no boundations for size like array
        cout<<"Overflow\n";
    else
    {
        newNode->data = val;
        newNode->next = *top;
        *top = newNode;
    }
}
int pop(Node **top)
{
    if(*top == NULL)
    {
        cout<<"UnderFlow\n";
        return -1;
    }
    else
    {
        Node *temp = *top;
        *top = (*top)->next;
        int popped = temp->data;
        free(temp);
        return popped;
    }  
    
}
int isEmpty(Node *top)
{
    if(top == NULL)  return 1;
    else return 0;
}

int main()
{
    Node *top = NULL;
    push(&top , 1);         //You Have to Must Pass By Address Not by Value 
    push(&top , 2);
    push(&top , 3);
    push(&top , 4);
    push(&top , 5);
    cout<<pop(&top);
    cout<<pop(&top);
    cout<<pop(&top);
    cout<<pop(&top);
    cout<<pop(&top);

}