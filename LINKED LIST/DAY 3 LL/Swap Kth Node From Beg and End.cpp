
// Should swap Kth node from beginning and Kth
// node from end in list and return new head.
Node *swapkthnode(Node* head, int num, int K)
{
    if (num < K)  return NULL; 
    if(num - K + 1 == K)    return head;    //If Both Nodes are Same
    
    if(head==NULL)
        return head;
        
    // For start
    Node *prev_p = NULL,*p = head;
    for(int i=1;i<K;i++)
    {
        prev_p = p;
        p = p->next;
    }
    
    // For last
    Node *prev_q = NULL ,*q=head;
    int lastPos = num - K + 1;
    for(int i = 1 ; i < lastPos ; i++)
    {
        prev_q = q;
        q = q->next;
    }
    
    if(prev_p)  
        prev_p->next = q;
     
    if(prev_q)  
        prev_q->next = p;
        
    Node *save = p->next;
    p->next = q->next;
    q->next = save;

    if(K == 1)
        head = q;
        
    if(K == num)
        head = p;
        
    return head;
    
}
