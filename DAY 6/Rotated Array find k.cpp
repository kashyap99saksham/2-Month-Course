#include<bits/stdc++.h>
using namespace std;
int main() 
{
    long long int t;  cin>>t;
    while(t--)
    {
        long long int size;   cin>>size;
        vector<long long int>v(size);
        for (long long int i = 0; i < size; i++)  cin>>v[i];
        long long int i;
        for (i = size-1; i > 0; i--)
        {
            if(v[i-1] <= v[i])
            {
                continue;
            }
            else
            {
                cout<<i;
                break;
            }
        }
        if(i==0)
            cout<<0;
        cout<<endl;        
    }       
}

