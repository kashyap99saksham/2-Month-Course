void linkdelete(struct Node  *head, int M, int N)
{
    Node *temp = head;
    while(temp)
    {
        int count = 1;
        while(temp && count<M)
        {
            count++;
            temp = temp->next;
        }

        if(temp == NULL)
            return;

        count = 1;
        Node *t = temp->next;
        while(t && count<=N)
        {
            t = t->next;
            count++;
        }
        temp->next = t;
        temp = t;
    }
}

