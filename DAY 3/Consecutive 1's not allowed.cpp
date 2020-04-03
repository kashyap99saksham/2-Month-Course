#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
    long long mod = pow(10,9)+7;
	while(t--){
	    int n;
	    cin>>n;
	    long long a[n+1];
	    a[0]=0;
	    a[1]=2;
	    a[2]=3;
	    for(int i=3;i<=n;i++){
	        a[i]=(a[i-1]+a[i-2])%mod;
	    }
	    cout<<a[n]<<endl;
	}
	return 0;
}