#include<bits/stdc++.h>
using namespace std;
void rearrange(long long int arr[], long long int n) 
{ 
    // initialize index of first minimum and first 
    // maximum element 
    long long int max_idx = n - 1, min_idx = 0; 
  
    // store maximum element of array 
    long long int max_elem = arr[n - 1] + 1; 
  
    // traverse array elements 
    for (long long int i = 0; i < n; i++) { 
        // at even index : we have to put maximum element 
        if (i % 2 == 0) { 
            arr[i] += (arr[max_idx] % max_elem) * max_elem; 
            max_idx--; 
        } 
  
        // at odd index : we have to put minimum element 
        else { 
            arr[i] += (arr[min_idx] % max_elem) * max_elem; 
            min_idx++; 
        } 
    } 
  
    // array elements back to it's original form 
    for (long long int i = 0; i < n; i++) 
        cout<<(arr[i] / max_elem)<<" "; 
} 
int main() 
{
    long long int t;  cin>>t;
    while(t--)
    {
        long long int size;   cin>>size;
        long long int arr[size];
        for (long long int i = 0; i < size; i++)  cin>>arr[i]; 
        rearrange(arr,size);
        cout<<endl;


    }
}