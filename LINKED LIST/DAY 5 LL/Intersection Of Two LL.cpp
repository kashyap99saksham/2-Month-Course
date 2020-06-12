Node* findIntersection(Node* head1, Node* head2)
{
    unordered_map <int,int> m;
    Node *temp = head2;
    while(temp)
    {
        m[temp->data]++;
        temp = temp->next;
    }
    temp = head1;
    while(temp)
    {
        m[temp->data]++;
        if(m[temp->data] > 1)
            cout<<temp->data<<" ";
        temp = temp->next;
    }
    return NULL;    //This is for testing Purpose Only [make list and insert Not only prints]
}