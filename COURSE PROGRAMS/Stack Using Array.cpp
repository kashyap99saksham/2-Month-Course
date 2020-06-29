#include<bits/stdc++.h>
using namespace std;
struct MyStack
{
    int size;
    int top = -1;    
    int *arr;
};
void push(MyStack *stk, int val)
{
    if(stk->top == stk->size-1)
    {
        cout<<"OverFlow\n";
        return;
    }
    else
    {
        stk->top++;
        stk->arr[stk->top] = val;
    }
}
int pop(MyStack *stk)
{
    if(stk->top == -1)  
    {
        cout<<"UnderFlow\n";
        return -1;
    }
    else
    {
        return stk->arr[stk->top--] ;
    }
}
int isEmpty(MyStack *stk)
{
    if(stk->top == -1)  return 1;
    else return 0;
}

int isFull(MyStack *stk)
{
    if(stk->top == stk->size-1)  return 1;
    else return 0;
}
int main()
{
    MyStack *stk;
    stk = new MyStack;      //Just making dynamic object of stack
    cout<<"Enter Size of Stack\n";
    cin>>stk->size;
    stk->arr = new int[stk->size];
    push(stk , 1);
    push(stk , 2);
    push(stk , 3);
    push(stk , 4);
    push(stk , 5);
    cout<<pop(stk);
    cout<<pop(stk);
    cout<<pop(stk);
    cout<<pop(stk);
    cout<<pop(stk);
    cout<<pop(stk);

}