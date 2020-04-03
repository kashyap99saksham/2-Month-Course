// Given an array A of N integers. The task is to find a peak element in it in O( log N ) .
// An array element is peak if it is not smaller than its neighbours. For corner elements, we need to consider only one neighbour.
// Note: There may be multiple peak element possible, in that case you may return any valid index.
// Input:
// 2
// 3
// 1 2 3
// 2
// 3 4
// Output:
// 1
// 1

//------Using Sort-------// 
int peakElement(int arr[], int n)
{
    sort(arr,arr+n);
    return n-1;
    
}

// /---We can find by using traverse and check arr[i-1] and arr[i+1]