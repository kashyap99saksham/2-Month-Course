// C++ implementation to insert value in sorted way 
// in a sorted doubly linked list 
#include <bits/stdc++.h> 

using namespace std; 

// Node of a doubly linked list 
struct Node { 
	int data; 
	struct Node* prev, *next; 
}; 

// function to create and return a new node 
// of a doubly linked list 
struct Node* getNode(int data) 
{ 
	// allocate node 
	struct Node* newNode = 
		(struct Node*)malloc(sizeof(struct Node)); 

	// put in the data 
	newNode->data = data; 
	newNode->prev = newNode->next = NULL; 
	return newNode; 
} 

// function to insert a new node in sorted way in 
// a sorted doubly linked list 
// ONLY THIS FUNCTION IS CREATED BY ME
void sortedInsert(Node **headRef,Node *newNode)
{
    if(!*headRef)
    {
        *headRef = newNode; 
        return;
    }
    
    Node *temp = *headRef;
    Node *prev_temp = NULL;
    while(temp->data < newNode->data)
    {
        if(temp->next == NULL)
        {
            temp->next = newNode;
            newNode->prev = temp;
            return;
        }
        prev_temp = temp;
        temp = temp->next;
    }
    if(prev_temp)
        prev_temp->next = newNode;
    if(!prev_temp)
        *headRef = newNode;
    newNode->prev = prev_temp;
    newNode->next = temp;
    temp->prev = newNode;

    return;
}

// function to print the doubly linked list 
void printList(struct Node* head) 
{ 
	while (head != NULL) { 
		cout << head->data << " "; 
		head = head->next; 
	} 
} 

// Driver program to test above 
int main() 
{ 
	/* start with the empty doubly linked list */
	struct Node* head = NULL; 

	// insert the following nodes in sorted way 
	struct Node* new_node = getNode(4); 
	sortedInsert(&head, new_node); 
	new_node = getNode(5); 
	sortedInsert(&head, new_node); 
	new_node = getNode(2); 
	sortedInsert(&head, new_node); 
	new_node = getNode(1); 
	sortedInsert(&head, new_node); 
	new_node = getNode(6); 
	sortedInsert(&head, new_node); 
	new_node = getNode(3); 
	sortedInsert(&head, new_node); 

	cout << "Created Doubly Linked Listn"; 
	printList(head); 
	return 0; 
} 
