// C++ program to find a pair with given sum x. 
#include<bits/stdc++.h> 
using namespace std; 

// structure of node of doubly linked list 
struct Node 
{ 
	int data; 
	struct Node *next, *prev; 
}; 

// A utility function to insert a new node at the 
// beginning of doubly linked list 
void insert(struct Node **head, int data) 
{ 
	struct Node *temp = new Node; 
	temp->data = data; 
	temp->next = temp->prev = NULL; 
	if (!(*head)) 
		(*head) = temp; 
	else
	{ 
		temp->next = *head; 
		(*head)->prev = temp; 
		(*head) = temp; 
	} 
} 
// ONLY THIS FUNCTION IS CREATED BY ME
void pairSum(Node *headRef,int x)
{
    Node *start = headRef,*end = headRef;
    while(end->next)
        end = end->next;

    while(start->data < end->data)
    {
        if(start->data + end->data < x)
        {
            start = start->next;
        }
        if(start->data + end->data > x)
        {
            end = end->prev;
        }
        if(start->data + end->data == x)
        {
            cout<<start->data<<" "<<end->data<<endl;
            end = end->prev;
            start = headRef;
        }
        
    }
}
// Driver program 
int main() 
{ 
	struct Node *head = NULL; 
	insert(&head, 40); 
	insert(&head, 30); 
	insert(&head, 29); 
	insert(&head, 28); 
	insert(&head, 22); 
	insert(&head, 10); 
	// insert(&head, 1); 
	int x = 52; 

	pairSum(head, x); 

	return 0; 
} 
