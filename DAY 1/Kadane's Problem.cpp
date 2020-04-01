#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;  cin>>t;
    while(t--)
    {
        int size; cin>>size;
        vector <int> v;
        for (int i = 0; i < size; i++)
        {
            int val; cin>>val;
            v.push_back(val);
        }
        int final_val = v[0],temp = 0;
        for (int i = 0; i < size; i++)
        {
            temp = temp + v[i];
            if(temp > final_val)
            {
                final_val = temp;
            }
            if(temp < 0)
            {
                temp = 0;
            }
        }
        cout<<final_val;    
        cout<<endl;        
    }       
}