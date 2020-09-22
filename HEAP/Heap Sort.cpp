// ---------------------------------WELL EXPLAINED BY RABINDRABABU--------------------------------------

/* Main function to do heap sort. This function uses buildHeap()
   and heapify()
void heapSort(int arr[], int n)  
{
    buildHeap(arr, n);
    for (int i=n-1; i>=0; i--)  
    {
        swap(arr[0], arr[i]);
        heapify(arr, i, 0);
    }
} */
// The functions should be written in a way that array become sorted 
// in increasing order when above heapSort() is called.
// To heapify a subtree rooted with node i which is  an index in arr[]. 
// n is size of heap. This function  is used in above heapSor()
void heapify(int a[], int n, int index)  
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
        heapify(a,n,largest);
    }
}

// Rearranges input array so that it becomes a max heap
void buildHeap(int a[], int n)  
{ 
    for(int i=(n-1)/2;i>=0;i--)
        heapify(a,n,i);
}
