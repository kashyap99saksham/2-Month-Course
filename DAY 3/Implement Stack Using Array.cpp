// ---------This problem was Functional Problem---------
// A Query Q is of 2 Types:
// (i) 1 x   (a query of this type means  pushing 'x' into the stack)
// (ii) 2     (a query of this type means to pop element from stack and print the poped element)



/*The structure of the class is
class MyStack
{
private:
    int arr[1000];
    int top;
public:
    MyStack(){top=-1;}
    int pop();
    void push(int);
};

 */

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
