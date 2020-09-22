// This solution is just telling that string can be rearrange or not 
// This is the simplest solution
// But Question be like print if true
// #include<bits/stdc++.h>
// using namespace std;
// typedef long long int ll;
// int main()
// {
//     ll t;
//     cin>>t;
//     while(t--)
//     {
//         string s;
//         cin>>s;
//         map<char,ll> m;
//         ll maxi=0;
//         for(int i=0;i<s.length();i++)
//         {
//             m[s[i]]++;
//             if(m[s[i]]>res)
//                 maxi=m[s[i]];
//         }
//         maxi>s.length()/2?cout<<0:cout<<1;
//         cout<<"\n";
//     }
// 	return 0;
// }


// NOW WE ARE USING HEAP METHOD FOR PRINTING OUTPUT
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;  cin>>t;
    while(t--)
    {
        string S;   cin>>S;
        string ans;
        unordered_map<char,int>mp;
        for (int i = 0; i < S.size(); i++)
            mp[ S[i] ]++;
        priority_queue< pair<int,char>> pq;

        for(auto i : mp)
            pq.push(make_pair(i.second , i.first ));

        pair<int,char> a,b;

        string s;   
        while(pq.size() > 1){
            pair<int,char> a = pq.top();
            pq.pop();
            pair<int,char> b = pq.top();
            pq.pop();
            
            s += a.second;
            s += b.second;
            
            a.first--;
            b.first--;
            
            if(a.first > 0) pq.push(a);
            if(b.first > 0) pq.push(b);
        }
        if(pq.empty()){
            return s;
        }
        if(pq.top().first > 1) return "";
        else{
            s.push_back(pq.top().second);
        }
        return s;
        
    }
}