#include<bits/stdc++.h>
using namespace std;
#define loop(n) for(int i=0;i<n;i++)

int Gcd(int n,int d)
{
    if(d==0)
        return n;
    else
        return Gcd(d,n % d);
}
int main() 
{
    int t;  cin>>t;
    while(t--)
    {
        int n,d;   cin>>n>>d; 
        int arr[n];
        loop(n)  cin>>arr[i];

        int gcd = Gcd(n,d);
        int j=0,temp=0;
        for (int i = 0; i < gcd; i++)
        {
            temp = arr[i];  
            j=i;
            while(1)
            {   
                int p = (j+d)%n;
                if(p == i)
                    break;
                arr[j] = arr[p];
                j = p;    
            }
            arr[j] = temp;
        }
        loop(n) cout<<arr[i]<<" ";
        cout<<endl;
    }       
}

