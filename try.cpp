#include<bits/stdc++.h>
using namespace std;
int main()  {
    int val,ans=0;  cin>>val;
    vector<int>v;
    while(val>0)    {
        if(val<100) ans = max(ans,val);
        v.push_back(val);
        cin>>val;
    }
    cout<<ans;
}