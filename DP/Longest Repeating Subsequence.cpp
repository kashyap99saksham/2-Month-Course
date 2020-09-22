#include <bits/stdc++.h>
using namespace std;

int LRS(string s1,string s2,int n,int m){
    int T[n+1][m+1];
    for(int i=0;i<n+1;i++)  
        for(int j=0;j<m+1;j++)
            if(i==0||j==0)  
                T[i][j]=0;
    for(int i=1;i<n+1;i++)  
        for(int j=1;j<m+1;j++)
            if(s1[i-1]==s2[j-1]&&i-1!=j-1)
                T[i][j] =   T[i-1][j-1]+1;
            else
                T[i][j] =   max(T[i][j-1],T[i-1][j]);
    return T[n][m];
}
int main() {
	int t;  cin>>t;
	   while(t--)
	   {
	       int n,m;   cin>>n;   m=n;
	       string s1,s2;    cin>>s1;    s2 = s1;    
	       cout<<LRS(s1,s2,n,m)<<endl;
	   }
	return 0;
}