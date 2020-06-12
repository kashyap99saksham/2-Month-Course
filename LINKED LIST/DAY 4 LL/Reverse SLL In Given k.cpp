/* Reverses the linked list in groups of size k and returns the  
   pointer to the new head node. */
struct Node *reverse (struct Node *head, int k) 
{ 
    struct Node* current = head; 
    struct Node* next = NULL; 
    struct Node* prev = NULL; 
    int count = 0;    
      
    /*reverse first k nodes of the linked list */ 
    while (current != NULL && count < k) 
    { 
        next  = current->next; 
        current->next = prev; 
        prev = current; 
        current = next; 
        count++; 
    } 
      
    /* next is now a pointer to (k+1)th node  
       Recursively call for the list starting from current. 
       And make rest of the list as next of first node */
    if (next !=  NULL) 
       head->next = reverse(next, k);  
  
    /* prev is new head of the input list */
    return prev; 
}