// Instead of using two data structures , try deque which has both stack and queue functionality

vector <int> zigZagTraversal(Node* root)
{
	vector<int>v;
	if(!root)   return v;
	queue<Node *>q;
	q.push(root);
	int level = 0;
	stack<int>stk;
	while(!q.empty())
	{
	    int p = q.size();
	    while(p--)
	    {
	        Node *temp = q.front();
	        q.pop();
	        if(level%2==0) 
	            v.push_back(temp->data);
	        else
	        {   
	            stk.push(temp->data);
	        }
	        if(temp->left)  q.push(temp->left);
	        if(temp->right)  q.push(temp->right);
	    }
	    while(!stk.empty()) 
	    {
	        v.push_back(stk.top()); stk.pop();
	    }
	    level++;
	}
	return v;
}
