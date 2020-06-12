
Node *reverse(Node *head)
{
    Node *prev = NULL;
    Node *curr = head;
    Node *next = NULL;
    while(curr)
    {
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }
    return prev;
}

void reorderList(Node* head) {
    if(head == NULL || head->next == NULL || head->next->next == NULL)  return;

    Node *mid = head;
    Node *fast = head;
    Node *prev = NULL;
    while(fast && fast->next)
    {
        prev = mid;
        mid = mid->next;
        fast = fast->next->next;
    }
    Node *first = head;
    Node *second = mid;
    prev->next = NULL;
    second = reverse(second);

    Node *p = first;
    Node *q = second;
    // *head = NULL;
    Node *pNext = NULL;
    Node *qNext = NULL;
    
    while(p  && q)
    {
        if(p && q)
        {
            pNext = p->next;    
            p->next = q;
            p = pNext;
        }
        if(q && p)
        {
            qNext = q->next;
            q->next = p;
            q = qNext;
        }
    }
}