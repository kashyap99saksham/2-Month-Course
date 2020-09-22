// Input :  abcd
// Output :  a 
//           b
//           c
//           d
//           ab
//           bc
//           cd
//           abc
//           bcd
//           abcd

#include<bits/stdc++.h>
using namespace std;

void PrintSub(string s)
{
    for(int i=0;i<s.length();i++)
    {
        string ans;
        for(int j=i;j<s.length();j++)
        {
            ans.push_back(s[j]);
            cout<<ans<<endl;
        }
        cout<<endl;
    }
}
int main()
{
    string s;   cin>>s;
    PrintSub(s);
}