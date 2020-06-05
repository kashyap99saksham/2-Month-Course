// // ---------This problem was Functional Problem---------
// // A Query Q is of 2 Types:
// // (i) 1 x   (a query of this type means  pushing 'x' into the stack)
// // (ii) 2     (a query of this type means to pop element from stack and print the poped element)

#include<bits/stdc++.h>
using namespace std;
class MyStack
{
    int arr[1000];
    int top;
    public:
        MyStack(){  top=-1;  }
        int pop();
        void push(int);
};
/* The method push to push element into the stack */
void MyStack :: push(int x)
{
    arr[++top] = x;
}

/*The method pop which return the element 
  poped out of the stack*/
int MyStack :: pop()
{
    if(top==-1)
        return -1;
    return arr[top--];
}

int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        MyStack sq;
        int Q;
        cin>>Q;
        while(Q--)
        {
            int QueryType = 0;
            cin>>QueryType;
            if(QueryType==1)
            {
                int a;  
                cin>>a;
                sq.push(a);
            }
            else if(QueryType==2)
            {
                cout<<sq.pop()<<" ";
            }
        }
        cout<<endl;
    }
}
