#include<iostream>
#include <bits/stdc++.h>
using namespace std;

void gfg()
{
    int m,n;
    cin>>m>>n;
    int i,j,A[m][n];
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            cin>>A[i][j];
        }
    }
    int T=0,R=n-1,B=m-1,L=0;
    vector <int> ans;
    int dir = 0;
    while(T<=B && L<=R)
    {
        if(dir==0)
        {
            for(i=L;i<=R;i++)
                ans.push_back(A[T][i]);
            T++;
        }
        else if(dir==1)
        {
            for(i=T;i<=B;i++)
                ans.push_back(A[i][R]);
            R--;
        }
        else if(dir==2)
        {
            for(i=R;i>=L;i--)
                ans.push_back(A[B][i]);
            B--;
        }
        else if(dir==3)
        {
            for(i=B;i>=T;i--)
                ans.push_back(A[i][L]);
            L++;
        }
        dir=(dir+1)%4;
    }
    for(auto i : ans)
        cout<<i<<" ";
    cout<<endl;
}

int main()
 {
	int t;
	cin>>t;
	while(t--)
	{
	    gfg();
	}
	return 0;
}