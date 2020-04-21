// Functional Problem
bool findTriplets(int arr[], int n)
{ 
    sort(arr,arr+n);
    for(int i=n-1;i>=2;i--)
    {
        int left = 0;
        int right = i-1;
        while(left<right)
        {
            if(arr[left]+arr[right]+arr[i]==0)
            {
                return true;
            }
            else if(arr[left]+arr[right]+arr[i]<0)
                left++;
            else
                right--;
        }
    }
    return false;
}