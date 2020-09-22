Node *flatten(Node *root)
{
    Node *temp=root;
    priority_queue <int,vector<int>,greater<int>> q;
    while(temp)
    {
        Node *curr = temp;
        while(curr)
        {
            q.push(curr->data);
            curr = curr->bottom;
        }
        temp=temp->next;
    }
    root=NULL;
    temp=NULL;
    while(!q.empty()){
        if(!root){
            root=new Node(q.top());
            temp=root;
            q.pop();
        }
        else{
            temp->bottom=new Node(q.top());
            temp=temp->bottom;
            q.pop();
        }
    }
    return root;
    
}