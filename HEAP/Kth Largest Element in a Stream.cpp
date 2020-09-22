#include <bits/stdc++.h>
using namespace std;

void Heapify(int a[],int n,int index)
{
    int largest = index;
    int left = 2*index+1;
    int right = 2*index+2;
    if(left<n && a[left]<a[largest])
        largest = left;
    if(right<n &&a[right]<a[largest])
        largest = right;
    
    if(largest!=index)
    {
        swap(a[largest],a[index]);
        Heapify(a,n,largest);
    }
    
}
void buildHeap(int arr[],int n)
{
    for(int i = (n-1)/2;i>=0;i--)
        Heapify(arr,n,i);
}
int main() 
{
    int t;
    cin>>t;
    while(t--)
    {
        int k,n;
        cin>>k>>n;
        int arr[n]; 
        for(int i=0;i<n;i++)    cin>>arr[i];
        int counter = 0; 
        while(counter<k-1)
        {
            cout<<-1<<" ";
            counter++;
        }
        int stream[k];

        // For First Stream
        for(int i = 0; i<k; i++)    stream[i] = arr[i];
        buildHeap(stream,k);
        cout<<stream[0]<<" ";
            
        // For Remaining Streams
        for(int i=k;i<n;i++)
        {
            if(arr[i]>stream[0])
            {
                stream[0] = arr[i];
                Heapify(stream,k,0);
            }
            cout<<stream[0]<<" ";

        }
        cout<<endl;
            }
}
