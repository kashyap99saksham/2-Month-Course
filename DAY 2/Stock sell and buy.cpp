// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int test;
//     cin>>test;
//     while(test--)
//     {
//         int size;
//         cin>>size;
//         int *arr = new int[size];
//         for (int i = 0; i < size; i++)
//         {
//             cin>>arr[i];
//         }
//         int i=0;
//         while(i<size-1)
//         {
//             int min,max;       
//             while(i<size-1 && arr[i+1]<arr[i])
//                 i++;
//             if(i==size-1)
//                 break;
//             min = i++;
//             while(i<size-1 && arr[i+1]>arr[i])
//                 i++;
//             max = i;
//             if(min==0 && max==0)
//             {
//                 cout<<"No Profit";
//                 break;
//             }
//             cout<<"("<<min<<" "<<max<<")"<<" ";
//         }   
//         cout<<endl;
//     }
// }

//RUNNING IN G4G IDE
#include<bits/stdc++.h>
#include<iostream>
using namespace std;
void get(int arr[],int n)
{
    int i=0,a=0,b=0;
    while(i<n-1)
    {
        while(i<n-1 && arr[i+1]<=arr[i])
        i++;
        if(i==n-1)
        break;
        a=i++;
        while(i<n && arr[i]>=arr[i-1])
        i++;
        b=i-1;
        cout<<"("<<a<<" "<<b<<")"<<" ";
    }
    if(a==0 && b==0)
    cout<<"No Profit";
}
int main()
{
    int t; cin>>t;
    while(t--)
    {
        int n; cin>>n; int arr[n];
        for(int i=0;i<n;i++)cin>>arr[i];
        get(arr,n);
        cout<<"\n";
    }
    return 0;
}