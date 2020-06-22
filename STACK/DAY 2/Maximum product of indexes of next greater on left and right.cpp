// C++ program to find the max 
// LRproduct[i] among all i 
#include <bits/stdc++.h> 
using namespace std; 
#define MAX 1000 

// function to find just next greater 
// element in left side 
vector<int> nextGreaterInLeft(int a[], int n) 
{ 
	vector<int> left_index(MAX, 0); 
	stack<int> s; 

	for (int i = n - 1; i >= 0; i--) { 

		// checking if current element is greater than top 
		while (!s.empty() && a[i] > a[s.top() - 1]) { 
			int r = s.top(); 
			s.pop(); 

			// on index of top store the current element 
			// index which is just greater than top element 
			left_index[r - 1] = i + 1; 
		} 

		// else push the current element in stack 
		s.push(i + 1); 
	} 
	return left_index; 
} 

// function to find just next greater element 
// in right side 
vector<int> nextGreaterInRight(int a[], int n) 
{ 
	vector<int> right_index(MAX, 0); 
	stack<int> s; 
	for (int i = 0; i < n; ++i) { 

		// checking if current element is greater than top 
		while (!s.empty() && a[i] > a[s.top() - 1]) { 
			int r = s.top(); 
			s.pop(); 

			// on index of top store the current element 
			// index which is just greater than top element 
			// stored index should be start with 1 
			right_index[r - 1] = i + 1; 
		} 

		// else push the current element in stack 
		s.push(i + 1); 
	} 
	return right_index; 
} 

// Function to find maximum LR product 
int LRProduct(int arr[], int n) 
{ 
	// for each element storing the index of just 
	// greater element in left side 
	vector<int> left = nextGreaterInLeft(arr, n); 

	// for each element storing the index of just 
	// greater element in right side 
	vector<int> right = nextGreaterInRight(arr, n); 
	int ans = -1; 
	for (int i = 1; i <= n; i++) { 

		// finding the max index product 
		ans = max(ans, left[i] * right[i]); 
	} 

	return ans; 
} 

// Drivers code 
int main() 
{ 
	int arr[] = { 5, 4, 3, 4, 5 }; 
	int n = sizeof(arr) / sizeof(arr[1]); 

	cout << LRProduct(arr, n); 

	return 0; 
} 
