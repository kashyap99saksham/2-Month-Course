#include <bits/stdc++.h>
using namespace std;

void nextLarger(long long *arr,long long s)
{
    stack <long long> stk;
    long long Greatest[s];
    for (long long i = 0; i < s; i++)
    {
        while(!stk.empty() && arr[stk.top()] < arr[i])
        {
            Greatest[stk.top()] = arr[i];
            stk.pop();
        }
        stk.push(i);
    }
    while(!stk.empty())
    {
        Greatest[stk.top()] = -1;
        stk.pop();
    }
    for (int i = 0; i < s; i++)
    {
        cout<<Greatest[i]<<" ";
    }
    
    
}
int main() {
    int t;  cin>>t;
    while(t--)
    {
        long long s;  cin>>s;
        long long arr[s];
        for(long long i = 0; i < s; i++)
            cin>>arr[i];
        nextLarger(arr,s);
        cout<<endl;
    }
	return 0;
}