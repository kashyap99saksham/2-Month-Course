/*Complete the function(s) below*/
stack <int> m;
void push(int a)
{
    s.push(a);
    if(s.size() == 1)
        m.push(s.top());
    else
    {
        if(s.top() < m.top())
            m.push(s.top());
    }
}

bool isFull(int n)
{
    return (s.size() >= n) ? true : false;
}

bool isEmpty()
{
    return (s.empty()) ? true : false;
}

int pop()
{
    int a = s.top();
    if(!m.empty() && a == m.top())
        m.pop();        
    s.pop();
    return a;
}

int getMin()
{
    if(!m.empty())
        return m.top();
    return -1;
}