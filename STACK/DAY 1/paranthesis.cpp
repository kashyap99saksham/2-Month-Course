#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;  cin>>t;
    while(t--)
    {
        // fflush(stdin);
        string s;
        cin>>s;
        // getline(cin,s);
        stack <char> stk;
        for (int i = 0; i < s.size(); i++)
        {
            if(stk.empty()) 
            {
                stk.push(s[i]);
                continue;
            }
            else if(s[i] == '{' || s[i] == '(' || s[i] == '[')
                stk.push(s[i]);
            else
            {
                if((s[i] == '}' && stk.top() == '{') || (s[i] == ')' && stk.top() == '(' ) || (s[i] == ']' && stk.top() == '['))
                    stk.pop();
            }

        }
        if(stk.empty())
            cout<<"balanced";
        else    cout<<"not balanced";
        cout<<endl;
    }
}