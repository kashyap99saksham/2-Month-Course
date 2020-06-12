Node* insert_beg(int data,Node *headRef)
{
    Node *newNode = new Node(data);
    // newNode->data = data;
    if(headRef == NULL)
    {
        newNode->next = NULL;
        headRef = newNode;
        return headRef;
    }
    else
    {
        newNode->next = headRef;
        headRef = newNode;
        return headRef;
    }
}
Node *compute(Node *head)
{
    if(head == NULL)    return NULL;
    if(head->next == NULL)  return head;
    Node *temp = head;
    stack <int> s;
    while(temp)
    {
        while(!s.empty() && s.top() < temp->data )
            s.pop();
            
        s.push(temp->data);
        temp = temp->next;  
    }
    // To make New list in old List [Just A Hack]
    head = NULL;
    while(!s.empty())
    {
        head = insert_beg(s.top(),head);
        s.pop();
    }
    return head;
}
