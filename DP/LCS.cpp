#include <bits/stdc++.h>
using namespace std;
int T[100+1][100+1];
int LCS(string s1,string s2,int n,int m)
{
    if(n==0 || m==0)
        return 0;
    if(T[n][m]!=-1)
        return T[n][m];
    if(s1[n-1]==s2[m-1])
        return T[n][m] = 1 + LCS(s1,s2,n-1,m-1);
    else
        return T[n][m] = max(LCS(s1,s2,n,m-1),LCS(s1,s2,n-1,m));
}
int main() {
	int t;  cin>>t;
	while(t--)
	{
	    int n,m;    cin>>n>>m;
	    string s1,s2;
	    cin>>s1>>s2;
	    memset(T,-1,sizeof(T));
	    cout<<LCS(s1,s2,n,m)<<endl;
	}
	return 0;
}