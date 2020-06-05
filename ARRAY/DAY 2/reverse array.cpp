// WE CAN USE STACK TO GET OUTPUT IN REVERSE
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int size;   cin>>size;  stack<int> s;
    for (int i = 0; i < size; i++){ int val;    cin>>val;   s.push(val); }
    while(!s.empty()){   cout<<s.top()<<" ";    s.pop();   }
}





// // ---------------BEST SOLUTION-------------------------
// // C++ program to reverse an array without 
// // using "-" sign 
// #include <bits/stdc++.h> 
// using namespace std; 

// // Function to reverse array 
// void reverseArray(int arr[], int n) 
// { 
// 	// Trick to assign -1 to a variable 
// 	// int x = (INT_MIN / INT_MAX); 

// 	// Reverse array in simple manner 
// 	for (int i = 0; i < n / 2; i++) 

// 		// Swap ith index value with (n-i-1)th 
// 		// index value 
// 		swap(arr[i], arr[n - i -1]); 
// } 

// // Drivers code 
// int main() 
// { 
// 	int arr[] = { 5, 3, 7, 2, 1, 6 }; 
// 	int n = sizeof(arr) / sizeof(arr[0]); 

// 	reverseArray(arr, n); 

// 	// print the reversed array 
// 	for (int i = 0; i < n; i++) 
// 		cout << arr[i] << " "; 

// 	return 0; 
// } 
