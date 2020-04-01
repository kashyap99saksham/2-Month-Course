#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;  cin>>t;
    while(t--)
    {
        int size; cin>>size;
        vector<int> v;
        int givensum = 0;
        for (int i = 0; i < size-1; i++)
        {
            int val;    
            cin>>val;
            givensum += val;
            v.push_back(val);
        }
        int totalsum=0;
        for (int i = 1; i < size+1; i++)
        {
            totalsum = totalsum + i;
        }
        int answer = totalsum - givensum;
        cout<<answer;
        cout<<endl;        
    }       
}

