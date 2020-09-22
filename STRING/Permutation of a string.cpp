#include<bits/stdc++.h>
using namespace std;
void Permute(string s,string ans)
{
    for(int i=0;i<s.length();i++)
    {
        ans[i] = s[i];
        
    }
}
int main()
{
    string s;   cin>>s;
    string ans;
    Permute(s,ans);
}