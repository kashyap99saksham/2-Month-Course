#include<bits/stdc++.h>
using namespace std;

long long minDist(long long arr[], long long n, long long x, long long y) {
    bool Xflag = false;
    bool Yflag = false;
    int dist = INT16_MAX;
    int xind,yind;
    for(int i = 0 ; i < n ; i++)
    {
        if(arr[i] == x)
        {
            Xflag = true;
            xind = i;
            if(Yflag == true)
            {
                dist = min(dist,abs(xind - yind));
                Yflag = false;
            }
        }
        if(arr[i] == y)
        {
            Yflag = true;
            yind = i;
            if(Xflag == true)
            {
                dist = min(dist,abs(xind - yind));
                Xflag = false;
            }
        }
    }
    if(dist < INT16_MAX)    return dist;
    return -1;
}

int main() 
{
    int t;  cin>>t;
    while(t--)
    {
        long long int size;   cin>>size;
        long long int arr[size];
        for (int i = 0; i < size; i++)  cin>>arr[i];
        int x,y;    cin>>x>>y;
        cout<<minDist(arr,size,x,y);
        cout<<endl;        
    }       
}

