// 32
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test;
    cin>>test;
    while(test--)
    {
        int count=0;
        string s1,s2;
        cin>>s1>>s2;
        for (int i = 0; i < s1.length(); i++)
        {
            int diff;
            diff = abs(int(s1[i]) - int(s2[i]));
            if(diff==32 || diff == 0)
                count++;
        }
        cout<<count<<endl;
    }
}