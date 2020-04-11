#include<bits/stdc++.h>
using namespace std;
int main() 
{
    int t;  cin>>t;
    while(t--)
    {
        int size,count_zero = 0;   cin>>size;
        vector <int> v;
        for (int i = 0; i < size; i++)
        {
            int val;    cin>>val;   
            if(val==0)  
                count_zero++;   
            else    
                v.push_back(val);
        }
        for (int i = 0; i < count_zero; i++)
            v.push_back(0);
        for (auto i : v)
            cout<<i<<" ";
        cout<<endl;        
    }       
}

