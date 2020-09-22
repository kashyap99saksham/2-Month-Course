// Input : nitin
// Output:
// n i t i n
// n iti n
// nitin
#include<bits/stdc++.h>
using namespace std;
bool isPalindrome(string str, int low, int high) 
{ 
    while (low < high) 
    { 
        if (str[low] != str[high]) 
            return false; 
        low++; 
        high--; 
    } 
    return true; 
} 
void PrintSub(string s)
{
    for(int i=0;i<s.length();i++)
    {
        string ans;
        for(int j=i;j<s.length();j++)
        {
            ans.push_back(s[j]);
            if( isPalindrome(ans,0,ans.length()-1) )
                cout<<ans<<endl;
        }
    }
}
int main()
{
    string s;   cin>>s;
    PrintSub(s);
}