#include<bits/stdc++.h>
using namespace std;
void Heapify(int arr[],int n,int i)
{
    int smallest = i;
    int left = 2*i+1;
    int right = 2*i+2;
    if(left<n && arr[smallest] > arr[left])
        smallest = left;
    if(right<n && arr[smallest] > arr[right])
        smallest = right;
    if(smallest!=i)
    {
        swap(arr[smallest],arr[i]);
        Heapify(arr,n,smallest);
    }
        
}
void BuildHeap(int arr[],int n)
{
    for(int i = (n-1)/2;i>=0;i--)
        Heapify(arr,n,i);
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int test;   cin>>test;
    while(test--)
    {
        int size;   cin>>size;
        int arr[size];
        for(int i = 0;i<size;i++)   cin>>arr[i];
        
    	int k;  cin>>k;
		
		BuildHeap(arr,size);
		for(int i=size-1;k>0;i--,k--)
		{
		    if(k==1)
		        cout<<arr[0]<<" ";
		    swap(arr[0],arr[i]);
		    Heapify(arr,i,0);
		}
        cout<<endl;
    }
}
