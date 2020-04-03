#include <iostream>
#include <bits/stdc++.h> 
using namespace std;

int main() 
{
    int t; 
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        
        int a[n];
        for(int i=0;i<n;i++)cin>>a[i];
        
        for(int i=0;i<n;i++)
        {
            if(i == n-1) 
                cout<<"-1 "<<endl;
            else if(a[i+1] < a[i])
                cout<<a[i+1]<<" ";
            else cout<<"-1 ";
        }
	}
	return 0;
}