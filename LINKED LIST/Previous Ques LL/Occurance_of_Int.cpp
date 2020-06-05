/*
  Return the no. of times search_for value is there in a linked list.
  The input list will have at least one element  

  Node is defined as 
struct node
{
    int data;
    struct node* next;
    
    node(int x){
        data = x;
        next = NULL;
    }
}*head;
*/

int count(struct node* head, int search_for)
{
    int count_search_for = 0;
    node *p = head;
    while(p!=NULL)
    {
        if(p->data == search_for)
            count_search_for++;
        p=p->next;
    }
    return count_search_for;
}