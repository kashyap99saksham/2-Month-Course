
/* The method push to push element into the queue*/
void MyQueue:: push(int x)
{
    QueueNode *NewNode = new QueueNode(x);
    NewNode->next = NULL;
    if(front == NULL)
    {
        front = NewNode;
        rear = NewNode;
    }
    else
    {
        rear->next = NewNode;
        rear = NewNode;
    }
}

/*The method pop which return the element
  poped out of the queue*/
int MyQueue :: pop()
{
    if(front==NULL) return -1;
    QueueNode *temp = front;
    int res = temp->data;
    front = front->next;
    free(temp);
    return res;
}
