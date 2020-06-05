#include<bits/stdc++.h>
using namespace std;
#define loop(n) for(int i=0;i<n;i++)
struct comp{
    bool operator() (pair<int,int> a,pair<int,int> b)
    {
        return a.first > b.first;
    }
};
int main() 
{
    int t;  cin>>t;
    while(t--)
    {
        int size;   cin>>size; 

        priority_queue<pair<int,int>,vector<pair<int,int>>,comp> q;        
        loop(size)
        {
            pair<int,int> p;
            cin>>p.first;
            cin>>p.second;
            q.push(p);
        }
        while(!q.empty())
        {
            int start = q.top().first;
            int last = q.top().second;
            q.pop();
            while(!q.empty() && q.top().first <= last)
            {
                if(q.top().second <= last)
                {
                    q.pop();
                    continue;
                }
                else
                    last = q.top().second;
                q.pop();
            }
            cout<<start<<" "<<last<<" ";
        }
        
        // Priting Priority Queue
        // while(!q.empty())
        // {
        //     cout<<q.top().first<<" ";
        //     cout<<q.top().second<<" ";
        //     q.pop();
        // }
        cout<<endl;        
    }       
}

