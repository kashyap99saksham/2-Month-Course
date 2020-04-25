#include<bits/stdc++.h>
using namespace std;
#define loop(n) for(int i=0;i<n;i++)
int main() 
{
    int t;  cin>>t;
    while(t--)
    {
        int r,c;   cin>>r>>c; 
        int arr[r][c];
        
        // Taking Input matrix
        loop(r)  
            for(int j=0;j<c;j++)
                cin>>arr[i][j];
        
        // Output var
        int out_row,j;
        int mini = INT32_MAX;
        loop(r)
        {  
            for( j=0;j<c;j++)
            {
                if(arr[i][j] == 1)
                   break;
            }
            if(j < mini)
            {
                mini = j;
                out_row = i;
            }
        }
        // cout<<(r+1)-mini;        //For printing no. of max 1's
        cout<<out_row;
        cout<<endl;        
    }       
}

