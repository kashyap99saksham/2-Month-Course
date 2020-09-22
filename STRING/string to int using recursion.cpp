#include<bits/stdc++.h>
using namespace std;
int convert(string s,int n)
{
    if(n==0)   return s[n] - '0';
    return  ( 10 * convert( s,n-1 )  + s[n]-'0' ) ;
}
int main()
{
    string s = "123";
    cout<<convert(s,s.length()-1);
}