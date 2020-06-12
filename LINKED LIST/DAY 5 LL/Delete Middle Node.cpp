// Deletes middle of linked list and returns head of the modified list
Node* deleteMid(Node* head) {
    if(head==NULL)
    return head;
    Node * fast= head;
    Node *slow = head;
    Node * prev;
    
    while(fast!=NULL && fast->next!=NULL)
    {
        fast=fast->next->next;
        prev = slow;
        slow= slow->next;
    }
    
    prev->next = slow->next;
    free(slow);
    return head;
}
