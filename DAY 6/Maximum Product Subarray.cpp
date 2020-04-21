// WRONG/INCORRECT
#include<bits/stdc++.h>
using namespace std;
#define lint long long int
#define loop(n) for(lint i=0;i<n;i++)

int main() 
{
    int t;  cin>>t;
    while(t--)
    {
        lint size;   cin>>size;
        vector<int>v(size);
        loop(size)  cin>>v[i];
        int Pmax = 1,local = 0,global = 0, Nmax = 1;
        loop(size)
        {
            Pmax = Pmax * v[i];
            Nmax = Nmax * v[i];
            
            local = max(Pmax,Nmax);
            if(local > global)
                global = local;
            if(Pmax <= 0)
                Pmax = 1;
            if(Nmax == 0)
                Nmax = 1;
        }
        cout<<global<<endl;        
    }       
}

