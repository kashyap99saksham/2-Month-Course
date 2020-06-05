/* Link list node */
/*
struct Node
{
    int data;
    Node* next;
    Node(int x) {  data = x;  next = NULL; }
}; */

// head : reference to head of linked list

int getCount(struct Node* head){

    int count=0;
    Node *p = head;
    while(p!=NULL)
    {
        count++;
        p=p->next;
    }
    return count;
}