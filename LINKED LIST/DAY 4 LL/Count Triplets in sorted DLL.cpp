// C++ implementation to count triplets in a sorted doubly linked list 
// whose sum is equal to a given value 'x' 
#include <bits/stdc++.h> 

using namespace std; 

// structure of node of doubly linked list 
struct Node { 
	int data; 
	struct Node* next, *prev; 
}; 

// function to count triplets in a sorted doubly linked list 
// whose sum is equal to a given value 'x' 
// ONLY THIS FUNCTION IS CREATED BY ME  
int countTriplets(struct Node* head, int x) 
{ 
	Node *a = head,*b = head,*c=head;
    while(c->next)
    {
        b = c;
        c = c->next;
    }
    int count = 0;
    while(a->data < b->data && b->data < c->data && a->data < c->data)
    {
        while(a->data < b->data)
        {
            if(a->data + b->data + c->data < x)
            {
                a = a->next;
                continue;
            }
            if(a->data + b->data + c->data > x)
            {
                b = b->prev;    
                a = head;
                continue;
            }
            if(a->data + b->data + c->data == x)
            {
                cout<<a->data<<" "<<b->data<<" "<<c->data<<endl;
                count++;
                a = head;
                b = b->prev;
                continue;
            }
        }
        a = head;
        c = c->prev;
        b = c->prev;
    }
	return count; 
} 

// A utility function to insert a new node at the 
// beginning of doubly linked list 
void insert(struct Node** head, int data) 
{ 
	// allocate node 
	struct Node* temp = new Node(); 

	// put in the data 
	temp->data = data; 
	temp->next = temp->prev = NULL; 

	if ((*head) == NULL) 
		(*head) = temp; 
	else { 
		temp->next = *head; 
		(*head)->prev = temp; 
		(*head) = temp; 
	} 
} 

// Driver program to test above 
int main() 
{ 
	// start with an empty doubly linked list 
	struct Node* head = NULL; 

	// insert values in sorted order 
	// insert(&head, 9); 
	insert(&head, 45); 
	insert(&head, 10); 
	insert(&head, 8); 
	insert(&head, 6); 
	insert(&head, 4); 
	insert(&head, 1); 

	int x = 22; 

	cout << "Count = "
		<< countTriplets(head, x); 
	return 0; 
} 
