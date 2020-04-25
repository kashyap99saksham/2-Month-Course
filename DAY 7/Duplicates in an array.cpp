// Note: Auxiliary Space must be O(1) and Time complexity must be O(n).

// ------------------USING NEGATIVE(BUT REQUIRED IN SORtED ORDER) -----------------
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
            arr[i] = val % size;
        }  
        loop(size)
        {
            int ind_val = abs(arr[i]);
            if(arr[ind_val] >= 0)
                arr[ind_val] = -arr[ind_val]; 
            else
                cout<< abs(arr[i])<<" ";
        }

        cout<<endl;        
    }       
}



// --------------------------USING DIVIDE ----------------------------------------
// C++ program to print all elements that 
// appear more than once. 
#include <iostream> 
using namespace std; 

// function to find repeating elements 
void printRepeating( int arr[], int n) 
{ 
	// First check all the values that are 
	// present in an array then go to that 
	// values as indexes and increment by 
	// the size of array 
	for (int i = 0; i < n; i++) 
	{ 
		int index = arr[i] % n; 
		arr[index] += n; 
	} 

	// Now check which value exists more 
	// than once by dividing with the size 
	// of array 
	for (int i = 0; i < n; i++) 
	{ 
		if ((arr[i]/n) > 1) 
			cout << i << " "; 
	} 
} 

// Driver's code 
int main() 
{ 
	int arr[] = {1, 6, 3, 1, 3, 6, 6}; 
	int arr_size = sizeof(arr)/sizeof(arr[0]); 

	cout << "The repeating elements are: \n"; 
	printRepeating( arr, arr_size); 
	return 0; 
} 
