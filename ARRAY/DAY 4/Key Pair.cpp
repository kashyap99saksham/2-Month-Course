#include<bits/stdc++.h>
using namespace std;
int main() 
{
    int t;  cin>>t;
    while(t--)
    {
        int size,sum;   cin>>size>>sum;
        unordered_map <int,int> m;
        for (int i = 0; i < size; i++)
        {
            int val;    cin>>val;   m[val]++;
        }
        bool flag = false;
        for(auto i : m)
        {
            int dif = sum - i.first;
            if(dif == i.first)
            {
                if(i.second == 1)
                {
                    continue;
                } 
            }
            if(m.find(dif) != m.end())
            {
                flag = true;
                cout<<"Yes";
                break;
            }
        }
        if(flag == false)
        {
            cout<<"No";
        }
        cout<<endl;        
    }       
}

