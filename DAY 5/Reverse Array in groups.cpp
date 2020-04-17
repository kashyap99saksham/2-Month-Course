#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;  cin>>t;
    while(t--)
    {
        int size,k;   cin>>size>>k;
        int arr[size];
        for (int i = 0; i < size; i++)  cin>>arr[i];
        for (int i = 0; i < size; i+=k)
        {
            int left = i;
            int right = min(i + k - 1,size-1);
            while(left<right)
            {
                swap(arr[left++],arr[right--]);
            }
        }     
        for (int i = 0; i < size; i++)
        {
            cout<<arr[i]<<" ";    
        }
        cout<<endl;
    }
}