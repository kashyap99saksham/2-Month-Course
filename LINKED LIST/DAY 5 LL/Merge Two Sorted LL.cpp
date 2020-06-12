
// Function to merge the two sorted linked lists
// head1, head2: head of the two sorted linked lists
Node* sortedMerge(Node* head1,   Node* head2)
{
    Node *p = head1;
    Node *q = head2;
    Node *prev = NULL;
    while(p && q)
    {
        // Insert Q in Beg
        if((p == head1) && q->data <= p->data)
        {
            Node *temp = new Node(q->data);
            temp->next = p;
            head1 = temp;
            p = head1;
            q = q->next;
            continue;
        }
        if(q->data > p->data)
        {
            prev = p;
            p = p->next;
            continue;
        }
        if(q->data <= p->data)
        {
            Node *temp = new Node(q->data);
            temp->next = p;
            prev->next = temp;
            q = q->next;
            p = temp;
            continue;
        }
    }
    if(q)
    {
        prev->next = q;
        // q = q->next;
    }
    return head1;
}

