Node* deleteAllOccurances(Node *head,int x)
{
    if(!head)
        return NULL;    
    while(head->data==x)        
        head = head->next;

    Node* temp = head;
    while(temp->next)
    {
        if(temp->next->data == x)
            temp->next = temp->next->next;
        else
            temp=temp->next;
    }
    return head;
}
