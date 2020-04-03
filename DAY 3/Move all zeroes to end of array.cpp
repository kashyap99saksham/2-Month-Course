#include<bits/stdc++.h>
using namespace std;
int main() 
{
    int t;  cin>>t;
    while(t--)
    {
        int size,count_zero = 0;   cin>>size;
        vector <int> v;
        map <int,int> m;
        for (int i = 0; i < size; i++)
        {
            int val;    cin>>val;   
            if(val==0)  
            {   count_zero++;   m[val] = 0;   }  
            else    
            {
                v.push_back(val);
                m[val] = 1;
            }   
        }
        for(auto i : v)
        {
            if(i)   cout<<i<<" ";
        }
        while(count_zero--) cout<<0<<" ";
        cout<<endl;        
    }       
}

