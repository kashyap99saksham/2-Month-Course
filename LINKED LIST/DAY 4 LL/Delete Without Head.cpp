// This function should delete node from linked list. The function
// may assume that node exists in linked list and is not last node
// node: reference to the node which is to be deleted
void deleteNode(Node *node)
{
    // THREE APPROCH :
    //  FIRST : 
    // node->data = node->next->data;
    // node->next = node->next->next;
    
    // SECOND :
    *node = *(node->next);      //VERY AMAZING APPROCH
    
    // THIRD :
    // Node *temp = node->next;
    // swap(node->data,temp->data);
    // node->next = temp->next;
    // free(temp);

}
