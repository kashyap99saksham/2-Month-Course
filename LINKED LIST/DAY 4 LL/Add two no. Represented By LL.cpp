// write a function returns the resultant linked list
Node* addTwoLists(Node* first, Node* second) {
    int carry = 0;
    
    while(first || second)
    {
        int sum = carry + (first ? first->data : 0) + (second ? second->data : 0);
        carry = (sum >= 10 ? 1 : 0);
        sum = sum % 10;
        cout<<sum<<" ";
        if(first)   first = first->next;
        if(second)  second = second->next;
    } 
    if(carry) cout<<carry;
    // For Testing Purpose [Create Another LL Then return newHeadr]
    return NULL;
}