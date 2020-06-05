#include<bits/stdc++.h>
using namespace std;
struct Node {
    int data;
    Node *next;
};
Node *append(int data,Node *headRef)
{
    Node *newNode = new Node;
    newNode->data = data;
    newNode->next = NULL;
    if(headRef==NULL)
    {
        headRef = newNode;
        return headRef;
    }
    Node *temp = headRef;
    while(temp->next)
        temp = temp->next;
    temp->next = newNode;
    return headRef;
}

void display(Node *headRef)
{
    Node *temp = headRef;
    while (temp != NULL)
    {
        cout<<temp->data;
        temp = temp->next;
    }
}

Node* swapNodes(struct Node *head_ref, int x, int y) 
{ 
   // Nothing to do if x and y are same 
   if (x == y) return NULL; 
  
   // Search for x (keep track of prevX and CurrX 
   struct Node *prevX = NULL, *currX = head_ref; 
   while (currX && currX->data != x) 
   { 
       prevX = currX; 
       currX = currX->next; 
   } 
  
   // Search for y (keep track of prevY and CurrY 
   struct Node *prevY = NULL, *currY = head_ref; 
   while (currY && currY->data != y) 
   { 
       prevY = currY; 
       currY = currY->next; 
   } 
  
   // If either x or y is not present, nothing to do 
   if (currX == NULL || currY == NULL) 
       return NULL; 
  
   // If x is not head of linked list 
   if (prevX != NULL) 
       prevX->next = currY; 
   else // Else make y as new head 
       head_ref = currY;   
  
   // If y is not head of linked list 
   if (prevY != NULL) 
       prevY->next = currX; 
   else  // Else make x as new head 
       head_ref = currX; 
  
   // Swap next pointers 
   struct Node *temp = currY->next; 
   currY->next = currX->next; 
   currX->next  = temp;
   
   return head_ref; 
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
            int new_data;   cin>>new_data;
            head = append(new_data,head);
        }
        int x,y;    cin>>x,y;
        head = swapNodes(head,x,y);
        // if(head != NULL)    
            display(head);
        // else 
            // cout<<"Key Not Found\n";
    }
}