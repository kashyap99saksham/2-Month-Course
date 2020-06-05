#include<bits/stdc++.h>
using namespace std;
int Partition(int arr[],int low,int high)
{
    int pivot = low;
    int start = low;
    int end = high;
    while(start < end)
    {
        while(arr[start] <= arr[pivot])
            start++;
        while(arr[end] > arr[pivot])
            end--;
        if(start < end)
            swap(arr[start],arr[end]);
    }
    swap(arr[pivot],arr[end]);
    return end;
}
void QuickSort(int arr[],int low,int high)
{
    int location;
    if(low<high)
    {
        location = Partition(arr,low,high);
        QuickSort(arr,low,location-1);
        QuickSort(arr,location+1,high);
    }
}
int main()
{
    int t;  cin>>t;
    while(t--)
    {
        int size;   cin>>size;
        int arr[size];
        for (int i = 0; i < size; i++)
            cin>>arr[i];
        QuickSort(arr,0,size-1);
        for (int i = 0; i < size; i++)
        {
            cout<<arr[i]<<" ";
        }
        
    }
}