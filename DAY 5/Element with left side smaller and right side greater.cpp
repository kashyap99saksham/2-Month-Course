#include<bits/stdc++.h>
using namespace std;
int main() 
{
    int t;  cin>>t;
    while(t--)
    {
        int size;   cin>>size;
        vector<int>v(size);
        for (int i = 0; i < size; i++)  cin>>v[i];  
        vector <int> RMin;
        RMin.push_back(v[size-1]);
        for (int i = size-2; i >= 0; i--)
        {
            if(v[i] < RMin.back())
                RMin.push_back(v[i]);
            else
                RMin.push_back(RMin.back());
        }
        reverse(RMin.begin(),RMin.end());
        int LMax = INT16_MIN;
        // int ans = -1;
        for(int i=0;i<size;i++)
        {
            if(v[i] > LMax)
            {
                LMax = v[i];
            }
            if(RMin[i] == LMax)
            {
                cout<<RMin[i];
                break;
            }
        }
        cout<<endl;        
    }       
}

