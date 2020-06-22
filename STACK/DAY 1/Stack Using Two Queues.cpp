/* The method push to push element into the stack */
void QueueStack :: push(int x)
{
        q1.push(x);
}

/*The method pop which return the element poped out of the stack*/
int QueueStack :: pop()
{
    // if(q1.empty())  return -1;
    while(!q1.empty())
    {
        q2.push(q1.front());
        q1.pop();
    }
    while(!q2.empty() && q2.size() != 1)
    {
        q1.push(q2.front());
        q2.pop();
    }
    if(!q2.empty())
    {
        int ans = q2.front();
        q2.pop();
        return ans;
    }
    if(q1.empty())  return -1;
    
      
}
