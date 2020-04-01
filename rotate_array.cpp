#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;  cin>>t;
    while(t--)
    {
        int size,shift;   cin>>size>>shift;
        vector <int> v,temp;
        for (int i = 0; i < shift; i++)
        {
            int val;
            cin>>val;
            temp.push_back(val);
        }
        for (int i = shift; i < size; i++)
        {
            int val;    cin>>val;
            v.push_back(val);
        }
        for (int i = 0; i < shift; i++)
        {
            v.push_back(temp[i]);
        }
        for (int i = 0; i < size; i++)
        {
            cout<<v[i]<<" ";
        }
        cout<<endl;        
    }       
}

