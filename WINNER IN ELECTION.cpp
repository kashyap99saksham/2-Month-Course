// 32
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test;
    cin>>test;
    while(test--)
    {
        int n; cin>>n;
        unordered_map<string,int> m;
        for (int i = 0; i < n; i++)
        {
            string s;   
            cin >>s;
            if (m.find(s) != m.end()) 
            {
                m[s]++;
            } 
            else 
            {
                m[s] = 1;
        	}
        }
                
        unordered_map <string, int> :: iterator itr; 
        int highest = 0;
        string winner;
        for (itr = m.begin(); itr != m.end(); ++itr) 
        { 
            if(itr->second > highest)
            {
                highest = itr->second;
                winner = itr->first;
            } 
            if(itr->second == highest && itr->first.length() < winner.length())
                winner = itr->first;            
        } 
        cout<<winner<<" "<<highest<<endl;
    }
}   