#include<bits/stdc++.h>
using namespace std;
#define loop(n) for(int i=0;i<n;i++)
struct comp
{
    bool operator() (pair<int,int>p1,pair<int,int>p2)
    {
        if(p1.second == p2.second)
            return p1.first > p2.first;
        return p1.second < p2.second;
    }
};

int main() 
{
    int t;  cin>>t;
    while(t--)
    {
        int size,k;   cin>>size>>k; 

        unordered_map<int,int>m;

        for(int i = 0 ; i < size ; i++)
        {
            int val;    cin>>val;
            m[val]++;
            priority_queue< pair<int,int> ,vector<pair<int,int>> ,comp > q(m.begin(),m.end());
            
            int count = 0;
	        while(!q.empty() && count < k) 
            {
    	        cout<<q.top().first<<" ";
	            q.pop();
	            count++;
	        }
        }
        cout<<endl;        
    }       
}

