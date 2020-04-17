#include<bits/stdc++.h>
#include<iostream>
#include<string>
using namespace std;
int main() 
{
    int t;  cin>>t;
    cin.ignore();
    while(t--)
    {
        string temp,s;
        getline(cin,temp);
        for (int i = 0; i < temp.length(); i++)
        {
            if(isdigit(temp[i]))
                s.push_back(temp[i]);
            else
            {   int asc = int(temp[i]);
                if(asc>=97 && asc <= 122)
                    s.push_back(temp[i]);
                if(asc>=65 && asc <= 90)
                    s.push_back(tolower(temp[i]));
                }
        }
        bool flag = true;
        int left = 0;
        int right = s.length()-1;
        for(int left = 0;left < s.length()/2 ;left++)
        {
            if(s[left] == s[right--])
                continue;
            else
            {
                flag = false;
                break;
            }
        }
        if(flag)
            cout<<"YES";
        else
            cout<<"NO";
        cout<<s;
        cout<<endl;
    }       
}

