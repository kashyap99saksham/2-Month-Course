
// This function is to segregate the elememtns in the linked list
// This will do the required arrangement by changing the links
Node* segregate(Node *head) {

    int zero = 0;
    int one = 0;
    int two = 0;
    Node *temp = head;
    while(temp)
    {
        if(temp->data == 0)
            zero++;
        if(temp->data == 1)
            one++;
        if(temp->data == 2)
            two++;
        temp = temp->next;
    }
    temp = head;
    while(temp)
    {
        if(zero)
        {
            temp->data = 0;
            zero--;
            temp = temp->next;
            continue;
        }
        if(one)
        {
            temp->data = 1;
            one--;
            temp = temp->next;
            continue;
        }
        if(two)
        {
            temp->data = 2;
            two--;
            temp = temp->next;
            continue;
        }
    }
    return head;
}
    