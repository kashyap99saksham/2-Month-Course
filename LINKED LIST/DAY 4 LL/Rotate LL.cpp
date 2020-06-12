/*  This function should rotate list counter-clockwise
    by k and return new head (if changed) */
Node* rotate(Node* head, int k) {
    if(k == 0)
        return head;
    if(head == NULL)
        return NULL;
    if(head->next == NULL)
        return head;

    Node *p = head;
    Node *q = head;
    k = k-1;
    while(k--)
        q = q->next;
    if(q->next == NULL)
        return head;
    head = q->next;
    q->next = NULL;
    Node *temp = head;
    while(temp && temp->next)
        temp = temp->next;
    temp->next =p;
    return head;
}
