Node* pairWiseSwap(struct Node* head) {
    // Base condition
    if(head == NULL || head->next == NULL)
        return head;

    //swapping code
    Node *p,*q,*temp;
	p = head;
	head = p->next;
	while(1)
	{
    	q = p->next;
    	temp = q->next;
    	q->next = p;
    	
    	if(temp == NULL)
    	{
    		p->next = NULL;
    		break;
    	}
    	
    	if(temp->next == NULL)
    	{
    		p->next = temp;
    		break;		
    	}
    	
    	p->next = temp->next;
    	p = temp;
	}
	return head;
}