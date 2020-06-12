// Should rearrange given linked list such that all even
// positioned Nodes are before odd positioned.
// Returns new head of linked List.
Node *rearrangeEvenOdd(Node *head)
{
    if(head==NULL||head->next==NULL||head->next->next==NULL)
    return head;
    Node *odd = head, *even = head->next;
    Node *evenfirst = even,*oddfirst = odd;
    while(odd->next && odd->next->next)
    {
        odd->next = even->next;
        odd = odd->next;
        even->next = odd->next;
        even = even->next;
    }
    odd->next = evenfirst;
    return oddfirst;

}