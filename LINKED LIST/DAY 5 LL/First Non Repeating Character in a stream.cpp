#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;  cin>>t;
    while(t--)
    {
        int size;   cin>>size;
        string s;
        unordered_map <char,int> m;
        for (int i = 0; i < size; i++)
            cin>>s[i];
            
        queue <char> q;
        for(int i = 0; i < size; i++)
        {
            m[s[i]]++;
            q.push(s[i]);
            while(!q.empty())
            {
                if(m[q.front()] > 1)
                    q.pop();
                else
                {
                    cout<<q.front()<<" ";
                    break;
                }
            }
            if(q.empty())
            {
                cout<<-1<<" ";
            }
        }
        cout<<endl;
    }
	return 0;
}