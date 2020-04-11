#include<bits/stdc++.h>
using namespace std;
int main() 
{
    int t;  cin>>t;
    while(t--)
    {
        int size1,size2;   cin>>size1>>size2;
        vector <int> v1,v2;
        for (int i = 0; i < size1; i++)
        {
            int val;    cin>>val;   v1.push_back(val);
        }
        for (int i = 0; i < size2; i++)
        {
            int val;    cin>>val;   v2.push_back(val);
        }
        int size =  min(v1.size(),v2.size());
        for (int i = 0; i < size; i++)
        {
            if(v1[i] >= v2[i])
        }
        
        cout<<endl;        
    }       
}

