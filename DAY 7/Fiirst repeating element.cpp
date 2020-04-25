// ------------------USING NEGATIVE -----------------
#include<bits/stdc++.h>
using namespace std;
#define loop(n) for(int i=0;i<n;i++)
int main() 
{
    int t;  cin>>t;
    while(t--)
    {
        int size;   cin>>size;
        int arr[size];
        loop(size)
        {
            int val;    cin>>val;
            arr[i] = val;
        }  
        // Initialize index of first repeating element 
        int min = -1; 
  
        // Creates an empty hashset 
        set<int> myset; 
  
        // Traverse the input array from right to left 
        for (int i = size - 1; i >= 0; i--) 
        { 
            // If element is already in hash set, update min 
            if (myset.find(arr[i]) != myset.end()) 
                min = i; 
    
            else   // Else add element to hash set 
                myset.insert(arr[i]); 
        } 
  
        // Print the result 
        if (min != -1) 
            cout << min+1; 
        else
            cout << -1;

        cout<<endl;        
    }       
}
