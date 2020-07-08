#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node *left=NULL,*right=NULL;
};
Node *createBinTree(vector<int>&v, int left, int right)
{
    int mid = (left + right)/2;
    if(left > right)  return NULL;
    Node *root = new Node();
    root->data = v[mid];
    root->left = createBinTree(v,left,mid-1);
    root->right = createBinTree(v,mid+1,right);
    return root;
}
void PreOrder(Node *root)
{
    if(!root)   return;
    cout<<root->data<<" ";
    PreOrder(root->left);
    PreOrder(root->right);
}
int main() 
{
	int t;  cin>>t;
	while(t--)
	{
	    int s;  cin>>s;
	    vector<int>v(s);
	    for(int i = 0; i<s; i++)    cin>>v[i];
	    Node *root = createBinTree(v,0,s-1);
	    PreOrder(root);
	    cout<<endl;
	}
	return 0;
}