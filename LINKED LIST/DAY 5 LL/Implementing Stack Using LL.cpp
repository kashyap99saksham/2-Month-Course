/* The method push to push element
   into the stack */
void MyStack ::push(int x) {
    StackNode *temp = new StackNode(x);
    temp->next = top;
    top = temp;
}

/* The method pop which return the element
  poped out of the stack*/
int MyStack ::pop() {
    if(!top) return -1;
    StackNode* temp = top;
    top = top->next;
    int data = temp->data;
    return data;
}
O