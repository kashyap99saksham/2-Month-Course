#include <bits/stdc++.h>
using namespace std;
int sub(int a[],int n){
    int sum=0,count=0;
    unordered_map<int,int>m;
    m[0]++;
    for(int i=0;i<n;i++)
    {
        sum+=a[i];
        if(m.find(sum)!=m.end())
        {
            cout<<m[sum]<<" ";
            count+=m[sum];
        }
        m[sum]++;
    }
    return count;
}
int main() {
	int t;cin>>t;
	while(t--){
	    int n;cin>>n;
	    int a[n];
	    for(int i=0;i<n;i++)cin>>a[i];
	    sub(a,n);
	}
	return 0;
}