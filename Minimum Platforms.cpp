#include<bits/stdc++.h>
using namespace std;
bool pred(pair<int,char> a, pair<int,char> b) 
{
    return a.first < b.first;
};

int main()
{
    int t;  cin>>t;
    while(t--)
    {
        int size;   
        cin>>size;
        unordered_map <int,char> m;
        for (int i = 0; i < 2*size; i++)
        {
            int val;    
            cin>>val;
            if(i < size)
                m[val] = 'a';
            else
                m[val] = 'd';
        }
        // auto pred = [&m] (char a, char b) 
        // {
        //     return m[a] > m[b] ;
        // };

        sort(m.begin(),m.end(),pred);

        int counter = 0,max = 0;
        for(auto i : m)
        {
            if(i.second == 'a')
            {
                counter++;
                if(counter > max)
                    max = counter;
            }
            else
                counter--;
            // cout<<counter<<endl;
        }
        cout<<max;
        // cout<<endl;        
    }       
}


