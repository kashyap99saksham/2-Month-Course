// G4G IDE IS WRONG FOR THIS QUESTION
// ---------------------------------------------------------------
// IF PROBLEM IS NOT FUNCTIONAL PROBLEM THEN BELOW IS THE CODE
#include<bits/stdc++.h>
using namespace std;
#define loop(n) for(int i=0;i<n;i++)
int main() 
{
    int t;  cin>>t;
    while(t--)
    {
        int size;   cin>>size;
        vector<int> v(size);
        loop(size)
        {
            cin>>v[i];
        }
        for (int i = 0; i < size-1; i++)
        {
            int val;    cin>>val;
            if(v[i] != val)
            {
                cout<<i;
                break;
            }
        }      
        cout<<endl;        
    }       
}

