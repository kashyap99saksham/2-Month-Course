#include <bits/stdc++.h>
using namespace std;

struct Node
{
	int data, height;
	Node *left, *right;
	Node(int x)
	{
		data = x;
		height = 1;
		left = right = NULL;
	}
};

int setHeights(Node* n)
{
	if(!n) return 0;
	n->height = 1 + max( setHeights(n->left) , setHeights(n->right) );
	return n->height;
}

Node* buildTree(string str)
{   
    // Corner Case
    if(str.length() == 0 || str[0] == 'N')
            return NULL;
    
    // Creating vector of strings from input 
    // string after spliting by space
    vector<string> ip;
    
    istringstream iss(str);
    for(string str; iss >> str; )
        ip.push_back(str);
        
    // Create the root of the tree
    Node* root = new Node(stoi(ip[0]));
        
    // Push the root to the queue
    queue<Node*> queue;
    queue.push(root);
        
    // Starting from the second element
    int i = 1;
    while(!queue.empty() && i < ip.size()) {
            
        // Get and remove the front of the queue
        Node* currNode = queue.front();
        queue.pop();
            
        // Get the current node's value from the string
        string currVal = ip[i];
            
        // If the left child is not null
        if(currVal != "N") {
                
            // Create the left child for the current node
            currNode->left = new Node(stoi(currVal));
                
            // Push it to the queue
            queue.push(currNode->left);
        }
            
        // For the right child
        i++;
        if(i >= ip.size())
            break;
        currVal = ip[i];
            
        // If the right child is not null
        if(currVal != "N") {
                
            // Create the right child for the current node
            currNode->right = new Node(stoi(currVal));
                
            // Push it to the queue
            queue.push(currNode->right);
        }
        i++;
    }
    
    setHeights(root);
    return root;
}

bool isBST(Node *n, int lower, int upper)
{
	if(!n) return 1;
	if( n->data <= lower || n->data >= upper ) return 0;
	return isBST(n->left, lower, n->data) && isBST(n->right, n->data, upper) ;
}

pair<int,bool> isBalanced(Node* n)
{
	if(!n) return pair<int,bool> (0,1);

	pair<int,bool> l = isBalanced(n->left);
	pair<int,bool> r = isBalanced(n->right);

	if( abs(l.first - r.first) > 1 ) return pair<int,bool> (0,0);

	return pair<int,bool> ( 1 + max(l.first , r.first) , l.second && r.second );
}

bool isBalancedBST(Node* root)
{
	if( !isBST(root, INT_MIN, INT_MAX) )
		cout<< "BST voilated, inorder traversal : ";

	else if ( ! isBalanced(root).second )
		cout<< "Unbalanced BST, inorder traversal : ";

	else return 1;
	return 0;
}

void printInorder(Node* n)
{
	if(!n) return;
	printInorder(n->left);
	cout<< n->data << " ";
	printInorder(n->right);
}

struct Node* deleteNode(struct Node* root, int data);

int main()
{
	int t;
	cin>>t;
	getchar();

	while(t--)
	{
		string s;
		getline(cin,s);
		Node* root = buildTree(s);
        
		int n;
		cin>> n;
		int ip[n];
		for(int i=0; i<n; i++)
			cin>> ip[i];
        
		for(int i=0; i<n; i++)
		{
			root = deleteNode(root, ip[i]);
			
			if( !isBalancedBST(root) )
				break;
		}
        
		if(root==NULL)
			cout<<"null";
		else
			printInorder(root);
		cout<< endl;
        
		getline(cin,s); // to deal with newline char
	}
	return 1;
}
// } Driver Code Ends


/* Node is as follows:

struct Node
{
	int data, height;
	Node *left, *right;
	Node(int x)
	{
		data = x;
		height = 1;
		left = right = NULL;
	}
};

*/
int NodeHeight(Node *t)
{
    if(t)
    {
        int a,b;
        a = NodeHeight(t->left);
        b = NodeHeight(t->right);
        return (a > b) ? a + 1 : b + 1;
    }
    else
        return 0;         
}
int BalanceFactor(Node *t)
{
    int lh,rh;
    lh = (t && t->left) ? t->left->height : 0;
    rh = (t && t->right) ? t->right->height : 0;
    return lh - rh;           
}

// This Function Return Balanced Tree root
Node *LLRotation(Node *t)
{
    Node *tl = t->left;             //tl = t's left
    Node *tlr = tl->right;           //tle = t's left's right
    t->left = tlr;
    tl->right = t;

    t->height = NodeHeight(t);
    tl->height = NodeHeight(tl);

    return tl;      //Now tl becomes root in this tree or subtree 

}
Node *LRRotation(Node *t)
{
    Node *tl = t->left;
    Node *tlr = tl->right;

    tl->right = tlr->left;
    t->left = tlr->right;

    tlr->left = tl;
    tlr->right = t;
    
    t->height = NodeHeight(t);
    tl->height = NodeHeight(tl);
    tlr->height = NodeHeight(tlr);

    return tlr;
}
Node *RRRotation(Node *t)
{
    Node *tr = t->right;
    Node *trl = tr->left;

    t->right = trl;
    tr->left = t;

    t->height = NodeHeight(t);
    tr->height = NodeHeight(tr);

    return tr;
}
Node *RLRotation(Node *t)
{
    Node *tr = t->right;
    Node *trl = tr->left;

    t->right = trl->left;
    tr->left = trl->right;

    trl->left = t;
    trl->right = tr;

    t->height = NodeHeight(t);
    tr->height = NodeHeight(tr);
    trl->height = NodeHeight(trl);

    return trl;
}
struct Node *InPre(Node *p)
{
    while(p && p->right != NULL)
        p = p-> right;
    return p;
}
struct Node *InSucc(Node *p)
{
    while(p && p->left != NULL)
        p = p->left;
    return p;
}
Node *deleteNode(Node *t,int key)
{
    if(t == NULL)   
        return NULL;

    if(t->data == key && t->left == NULL && t->right == NULL)
    {
        free(t);
        return NULL;
    }
    if(key < t->data)
        t->left = deleteNode(t->left,key);
    if(key > t->data)
        t->right = deleteNode(t->right,key);
        
    if(key == t->data)        //It means Key is Found But having Childs || Delete that Node || OR Replace it with Inorder Predcs ,Succesr
    {
        if(NodeHeight(t->left) > NodeHeight(t->right))
        {
            Node *q = InPre(t->left);
            t->data = q->data;
            t->left = deleteNode(t->left,q->data);
        }
        else
        {
            Node *q = InSucc(t->right);
            t->data = q->data;
            t->right = deleteNode(t->right,q->data);
        }
    }
    // Before Return Node Update Its Height
    t->height = NodeHeight(t);

    // Now Check Its Balanced Factor
    if(BalanceFactor(t) == 2)       // It Means Tree Is Heavy From Left Side 
    {
        if(BalanceFactor(t->left) == 1)     //It Means Tree is Heavy Left Left LL
            return LLRotation(t);
        if(BalanceFactor(t->left) == -1)     //It Means Tree is Heavy Left Right LR
            return LRRotation(t);
    }
    if(BalanceFactor(t) == -2)       // It Means Tree Is Heavy From Right Side 
    {
        if(BalanceFactor(t->right) == 1)     //It Means Tree is Heavy Right Left RL
            return RLRotation(t);
        if(BalanceFactor(t->right) == -1)     //It Means Tree is Heavy Right Right RR
            return RRRotation(t);
    }
    return t; 

}