#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;  cin>>t;
    while(t--)
    {
        int size;   cin>>size;
        int arr[size];
        map<int,int>m;
        for (int i = 0; i < size; i++)
        {
           int val;
           cin>>val;
           if(m.find(val)==m.end())
           {
               cout<<val<<" ";
           }
           m[val]++;   
        }
        
        cout<<endl;        
    }       
}
 