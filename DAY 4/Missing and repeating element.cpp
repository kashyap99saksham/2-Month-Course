#include<bits/stdc++.h>
using namespace std;
int main() 
{
    int t;  cin>>t;
    while(t--)
    {
        int size,sum=0;   cin>>size;
        unordered_map <int,int> m;
        for (int i = 0; i < size; i++)
        {
            int val;    cin>>val;   m[val]++;   if(m[val]>1)    cout<<val<<" ";;
        }
        int z = 1;
        while (z <= size)
        {
            if(m.find(z) == m.end())
            {
                cout<<z;
                break;
            }   
            z++;
        }
        cout<<endl;        
    }       
}

