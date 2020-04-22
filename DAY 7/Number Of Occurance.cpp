#include<bits/stdc++.h>
using namespace std;
#define loop(n) for(int i=0;i<n;i++)
int main() 
{
    int t;  cin>>t;
    while(t--)
    {
        int size,no,count=0;   cin>>size>>no;
        for (int i = 0; i < size; i++)
        {
            int val;    cin>>val;    
            if(val == no)
                count++;
        }
        cout<<count;        
        cout<<endl;        
    }       
}

