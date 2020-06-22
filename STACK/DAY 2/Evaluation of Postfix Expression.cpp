#include <bits/stdc++.h>
using namespace std;

int eval(int a,int b,char op)
{
    if(op == '+')   return a+b;   
    if(op == '-')   return a-b;
    if(op == '*')   return a*b;
    if(op == '/')   return a/b;
}
void evaluate(string s)
{
    stack <int> stk;
    for(int i=0;i<s.size();i++)
    {
        if(isdigit(s[i]))
            stk.push(s[i] - '0');
        else
        {
            int b = stk.top();
            stk.pop();
            int a = stk.top();
            stk.pop();
        
            stk.push(eval(a,b,s[i]));
        }
    }
    if(!stk.empty())
        cout<<stk.top(); 
    else cout<<-1;   
}
int main() 
{
	int t;  cin>>t;
	while(t--)
	{
        string s;
        cin>>s;
	    evaluate(s);
        cout<<endl;
	}
	return 0;
}