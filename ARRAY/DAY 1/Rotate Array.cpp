#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;  cin>>t;
    while(t--)
    {
        int size,shift;   cin>>size;
        vector <int> v,temp;
        int arr[size];
        for (int i = 0; i < size; i++)  cin>>arr[i];
        cin>>shift;
        for (int i = 0; i < shift; i++)
        {
            temp.push_back(arr[i]);
        }
        for (int i = shift; i < size; i++)
        {
            v.push_back(arr[i]);
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

