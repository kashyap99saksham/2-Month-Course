// COUNT INVERSIONS USING MERSE SORT
#include <stdio.h>
//Inversion
long int Merge(int A[], int start, int mid, int end);
long int MergeSort(int A[], int start, int end);
int main()
{
	int T,i,j,N,Arr[1000000];
	long int count;
	
	scanf("%d",&T);
	if(T>0 && T<=100)
	{
		for(i=0; i<T; i++)
		{
			scanf("%d",&N);
			for(j=0; j<N; j++)
				scanf("%d",&Arr[j]);
				
			count=0;
			
			count+=MergeSort(Arr,0,N-1);
			
			printf("%ld\n", count);
		}	
	}
	
	
	return 0;
}
long int Merge(int A[], int start, int mid, int end)
{
	long int count=0;
	int i,j,k;
	int n1= mid-start+1;
	int n2= end-mid;
	int B[n1], C[n2];
	for(i=0; i<n1; i++)
		B[i]= A[start+i];
	for(j=0; j<n2; j++)
		C[j]= A[mid+1+j];
	
	i=0,j=0,k=start;	
	while(i<n1 && j<n2)
	{
		if(B[i]<=C[j])
			A[k++]= B[i++];
		else
			A[k++]= C[j++],count+=n1-i;
	}
	while(i<n1)
		A[k++]= B[i++];
	while(j<n2)
		A[k++]= C[j++];
	
		
	return count;
}

long int MergeSort(int A[], int start, int end)
{
	long int count=0;
	int mid = start + (double)(end-start)/2 ; 
	
	if(start<end)
	{
		count+=MergeSort(A, start, mid);
		count+=MergeSort(A, mid+1, end);
		count+=Merge(A, start, mid, end);
	}
	return count;
}





// A STL Set based approach for inversion count 
#include<bits/stdc++.h> 
using namespace std; 

// Returns inversion count in arr[0..n-1] 
int getInvCount(int arr[],int n) 
{ 
	// Create an empty set and insert first element in it 
	multiset<int> set1; 
	set1.insert(arr[0]); 

	int invcount = 0; // Initialize result 

	multiset<int>::iterator itset1; // Iterator for the set 

	// Traverse all elements starting from second 
	for (int i=1; i<n; i++) 
	{ 
		// Insert arr[i] in set (Note that set maintains 
		// sorted order) 
		set1.insert(arr[i]); 

		// Set the iterator to first greater element than arr[i] 
		// in set (Note that set stores arr[0],.., arr[i-1] 
		itset1 = set1.upper_bound(arr[i]); 

		// Get distance of first greater element from end 
		// and this distance is count of greater elements 
		// on left side of arr[i] 
		invcount += distance(itset1, set1.end()); 
	} 

	return invcount; 
} 

// Driver program to test above 
int main() 
{ 
	int arr[] = {8, 4, 2, 1}; 
	int n = sizeof(arr)/sizeof(int); 
	cout << "Number of inversions count are : "
		<< getInvCount(arr,n); 
	return 0; 
} 
