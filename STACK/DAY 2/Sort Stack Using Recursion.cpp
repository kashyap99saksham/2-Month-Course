
/* The below method sorts the stack s 
you are required to complete the below method */
void InsertSorted(stack <int> &s,int element)
{
    if(s.empty() || s.top() <= element)
    {
        s.push(element);
        return;
    }
    int temp = s.top();
    s.pop();
    InsertSorted(s,element);
    s.push(temp);
}
void holder(stack <int> &s)
{
    if(!s.empty())
    {
        int temp = s.top();
        s.pop();
        holder(s);
        InsertSorted(s,temp);
    }
}
void SortedStack :: sort()
{
    holder(s);
}