#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;  cin>>t;
    while(t--)
    {
        int size;   cin>>size;
        vector <int> v;
        stack <int> out;
        for (int i = 0; i < size; i++)
        {
            int val;    cin>>val;
            v.push_back(val);
        }
        int temp = v[size-1];
        out.push(temp);
        for (int i = size-2; i >= 0; i--)
        {
            if(v[i] >= temp)
            {
                temp = v[i];
                out.push(temp);
            }
        }         
        while(!out.empty())            
        {
            int val = out.top();
            cout<<val<<" ";
            out.pop();
        } 
        cout<<endl;        
    }       
}
