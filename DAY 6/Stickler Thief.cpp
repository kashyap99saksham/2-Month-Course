// Very  Good And Efficient Approach [Love this Code]
#include<bits/stdc++.h>
using namespace std;
#define loop(n) for(int i = 0;i<n;i++)
int main()  {
	int t,n;    cin>>t;
	while(t--) {
	    cin>>n;
	    vector<long long> v(n);
	    loop(n) cin>>v[i]; 
	    long long a = 0, b = 0;
	    loop(n) ( i%2 == 1 ) ? a = max( a + v[i] , b) : b = max( b + v[i] , a);
	    cout<<max(a,b)<<endl;
	}
}