Node *checkLoop(Node *headRef)
{
    Node *p,*q;
    p = headRef;
    q = headRef;
    while(q && q && q->next)
    {
        p = p->next;
        q = q->next->next;
        if(p == q)
            return q;
    }
    return NULL;
}
Node *findStarting(Node*headRef , Node *q)
{
    Node *temp = headRef;
    while(temp != q)
    {
        temp = temp->next;
        q = q->next;
    }
    return temp;
}
void removeLoop(Node* head)
{
    if(head == NULL)
        return;
    if(head->next == NULL)
        return;
    Node *q = checkLoop(head);
    if(q == NULL)
        return;
    Node *startOfCycle = findStarting(head,q);
    Node *temp = startOfCycle;
    while(temp->next != startOfCycle)
        temp = temp->next;
    temp->next = NULL;
}