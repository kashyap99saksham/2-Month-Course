// USING TABULAR METHOD
#include <bits/stdc++.h>
using namespace std;
int KnapSack(int W,int wt[],int val[],int n)
{
    int T[n+1][W+1];
    for(int i=0;i<n+1;i++)
    {
        for(int j=0;j<W+1;j++)
        {
            if(i==0 || j==0)
                T[i][j] = 0;
        }
    }
    for(int i=1;i<n+1;i++)
    {
        for(int j=1;j<W+1;j++)
        {
            if(wt[i-1] <= j)
            {
                T[i][j] = max(
                                val[i-1]+T[i-1][j-wt[i-1]],
                                T[i-1][j]
                            );
            }
            else
            {
                T[i][j]=T[i-1][j];
            }
        }
    }
    return T[n][W];
}    
int main() {
	int t;  cin>>t;
	while(t--)
	{
	    int n,W;    cin>>n>>W;
	    int wt[n],val[n];
	    for(int i=0;i<n;i++)    cin>>val[i];
	    for(int i=0;i<n;i++)    cin>>wt[i];
	    cout<<KnapSack(W,wt,val,n)<<endl;
	}
	return 0;
}


// Using Recursion + Memoization
#include <bits/stdc++.h>
using namespace std;
int arr[1000][1000];
int KnapSack(int W,int wt[],int val[],int n)
{
    if(n==0 || W==0)
        return 0;
    if(arr[n][W] != -1)
    {
        return arr[n][W];
    }
    if(wt[n-1]<=W)
    {
        return arr[n][W] = max(
                    val[n-1] + KnapSack(W-wt[n-1],wt,val,n-1),
                    KnapSack(W,wt,val,n-1)
                    );
    }
    else
        return arr[n][W] = KnapSack(W,wt,val,n-1);
}    
int main() {
	int t;  cin>>t;
	while(t--)
	{
	    int n,W;    cin>>n>>W;
	    int wt[n],val[n];
	    for(int i=0;i<n;i++)    cin>>val[i];
	    for(int i=0;i<n;i++)    cin>>wt[i];
	    memset(arr,-1,sizeof(arr));
	    cout<<KnapSack(W,wt,val,n)<<endl;
	}
	return 0;
}