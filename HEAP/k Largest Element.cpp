#include <iostream>
using namespace std;

void Heapify(int a[],int n,int index)
{
    int largest = index;
    int left = 2*index+1;
    int right = 2*index+2;
    if(left<n && a[left]>a[largest])
        largest = left;
    if(right<n &&a[right]>a[largest])
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
    int t;  cin>>t;
    while(t--)
    {
        int size,k; cin>>size>>k;
        int arr[size];
        for(int i=0;i<size;i++) cin>>arr[i];
        buildHeap(arr,size);
        for (int i=size-1; k>0; k--,i--)  
        {
            cout<<arr[0]<<" ";
            swap(arr[0], arr[i]);
            Heapify(arr, i, 0);
        }
        cout<<endl;
    }
	return 0;
}